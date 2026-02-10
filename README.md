SonicSpike ist im Grunde ein digitaler „Schalldämpfer“ für nervige Werbeanrufer. 
Hier ist die genaue Funktionsweise, unterteilt in die drei Kernbereiche:

1. Der „Spion“ (Überwachung & Erkennung)
Sobald dein Handy einen Anruf erhält, tritt der BroadcastReceiver (CallReceiver) in Aktion:

System-Überwachung: Die App lauscht im Hintergrund auf das Signal 

Identifizierung: Sie erkennt sofort den Status RINGING (Es klingelt) und kann – sofern du die Berechtigung erteilt hast – sogar die Nummer des Anrufers auslesen.

Blitzstart: Bevor du überhaupt abhebst, bereitet der SpikeService im Hintergrund die „Waffe“ 

2. Die Benutzeroberfläche (Das Overlay)
Da Android Standard-Anrufbildschirme streng schützt, nutzt SonicSpike einen Trick:

System-Overlay: Die App legt ein schwebendes Fenster (System Alert Window) direkt über den Anrufbildschirm.

Sichtbarkeit: Dieses Fenster zeigt dein Sonic-Icon und den großen roten Angriffs-Button, selbst wenn dein Sperrbildschirm aktiv ist.

Interaktion: Du entscheidest: Ist es ein bekannter Kontakt? Dann ignoriere das Fenster. Ist es ein Spammer? Dann mach dich bereit.

Der „Angriff“ in der Praxis:
Annahme: Du nimmst den Spam-Anruf manuell an.

Trigger: Du drückst auf den Sonic-Button.

Feedback-Loop: Der schrille 3500 Hz Ton knallt aus deinem Lautsprecher direkt in dein eigenes Mikrofon.

Übertragung: Das Mikrofon schickt diesen verzerrten, ohrenbetäubenden Lärm mit voller Lautstärke durch die Telefonleitung direkt in das Headset des Callcenter-Mitarbeiters.
