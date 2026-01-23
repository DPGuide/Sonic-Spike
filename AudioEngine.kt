package com.example.sonicspikecpp

object AudioEngine {
    // Lädt die C++ Library beim Start der App
    init {
        System.loadLibrary("sonicspike-lib")
    }

    // Deklariert die externe C++ Funktion
    external fun generateSpikeNative(buffer: ShortArray, length: Int)
}