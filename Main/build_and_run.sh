#!/usr/bin/env bash
set -euo pipefail

# Přeloží a spustí Formule demo bez CMake (rychlé řešení)
cd "$(dirname "$0")"

echo "Kompiluji pomocí g++..."
g++ -std=c++17 -Wall -Wextra *.cpp -o formule_demo

echo "Spouštím formule_demo..."
./formule_demo

