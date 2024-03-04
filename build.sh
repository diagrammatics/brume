#!/bin/bash

# Navigate to the script's directory
cd "$(dirname "$0")"

# Set the TCC and raylib paths relative to the current script location
TCC="./tcc/tcc.exe"
RAYLIB_INC="./raylib/include"
RAYLIB_LIB="./raylib/lib"

# Compile the application
"$TCC" -o app.exe app.c -I"$RAYLIB_INC" -L"$RAYLIB_LIB" -lraylib -lopengl32 -lgdi32 -lwinmm -DPLATFORM_DESKTOP
