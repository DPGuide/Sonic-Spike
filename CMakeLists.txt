cmake_minimum_required(VERSION 3.10.2)

# Name der Bibliothek festlegen
add_library(
        sonicspike-lib # Der Name
        SHARED         # Als Shared Library (.so)
        native-lib.cpp # Deine C++ Datei
)

# Standard Android Bibliotheken finden (für Logs etc.)
find_library(
        log-lib
        log
)

# Alles verlinken
target_link_libraries(
        sonicspike-lib
        ${log-lib}
)