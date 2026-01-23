// ... innerhalb von startSonicAttack() ...

Thread {
    // ... AudioTrack Setup wie vorher ...
    
    val buffer = ShortArray(buffSize)
    
    audioTrack?.play()

    while (isAttacking) {
        // HIER IST DER UNTERSCHIED:
        // Wir rufen C++ auf, um den Buffer zu füllen.
        // Das passiert im "Unmanaged Memory" und ist rasend schnell.
        AudioEngine.generateSpikeNative(buffer, buffer.size)

        // Den gefüllten Buffer abspielen
        audioTrack?.write(buffer, 0, buffer.size)
    }
}.start()