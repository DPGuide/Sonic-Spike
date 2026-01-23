#include <jni.h>
#include <cmath>
#include <android/log.h>

// Log-Tag für Debugging
#define TAG "SonicSpikeNative"

// Konstanten
const int SAMPLE_RATE = 48000;
const double PI = 3.14159265358979323846;
const double ATTACK_FREQ = 3500.0; // 3.5 kHz (Schmerzgrenze Headset)

// Diese Funktion wird von Kotlin aufgerufen
// ACHTUNG: Der Name muss exakt zum Paketnamen passen!
// Format: Java_paket_name_KlassenName_FunktionsName
extern "C" JNIEXPORT void JNICALL
Java_com_example_sonicspikecpp_AudioEngine_generateSpikeNative(
        JNIEnv *env,
        jobject /* this */,
        jshortArray audioBuffer,
        jint length) {

    // 1. Direkten Zeiger auf das Array holen (Kein Kopieren = Extrem schnell)
    jshort *bufferPtr = env->GetShortArrayElements(audioBuffer, NULL);

    static double phase = 0.0;
    double phaseIncrement = 2.0 * PI * ATTACK_FREQ / SAMPLE_RATE;

    // 2. Die Schleife der Zerstörung
    for (int i = 0; i < length; i++) {
        // RECHTECKWELLE (Square Wave) in C++
        // Wir nutzen keine 'sin' Funktion für jeden Step (zu langsam),
        // wir prüfen nur die Phase -> Maximale CPU Effizienz.
        
        if (phase < PI) {
            bufferPtr[i] = 32000;  // Voller positiver Anschlag
        } else {
            bufferPtr[i] = -32000; // Voller negativer Anschlag
        }

        phase += phaseIncrement;
        if (phase >= 2.0 * PI) {
            phase -= 2.0 * PI;
        }
    }

    // 3. Zeiger freigeben und Änderungen an Java zurückmelden
    env->ReleaseShortArrayElements(audioBuffer, bufferPtr, 0);
}