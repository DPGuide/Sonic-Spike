Manual: SonicSpike (V1.0)
1. What is SonicSpike?
SonicSpike is a defensive utility designed to counter unwanted telemarketing and spam calls. It utilizes a combination of high-performance C++ and the Android audio architecture to launch an acoustic counter-measure when a user is being targeted by scammers.

2. Key Features
Call Monitoring: Constantly monitors telephony states and triggers a dedicated overlay upon incoming calls.

C++ Audio Engine: Generates a high-frequency (3,500 Hz) square wave in real-time. This specific frequency is designed to hit the human ear canal's natural resonance.

Headset Targetting: Specifically exploits the hardware characteristics of Bluetooth headsets commonly used in call centers to maximize acoustic discomfort for the caller.

3. Technical Operation
When the user activates "SonicSpike":

The signal is injected into the Voice Uplink stream.

The app forces Speakerphone Mode to create a feedback loop between the speaker and microphone, further amplifying the output.

The underlying C++ engine ensures raw, unfiltered data transmission (Clipping) with minimal latency to bypass software-based noise cancellation on the receiver's end.

⚠️ Wichtiger Sicherheitshinweis / Safety Disclaimer

English: Use this tool at your own risk. Extreme volume levels can cause hearing damage. This utility is intended solely for defense against illegal spam activities.
