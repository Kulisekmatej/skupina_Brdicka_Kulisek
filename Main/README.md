# Formule Demo (Main)

Tento adresář obsahuje jednoduchou ukázku tříd Formule a několika týmů (Ferrari, Mercedes, RedBull, McLaren).

Rychlé spuštění bez CMake (pokud nemáš CMake nainstalovaný):

1) Otevři terminal v `Main/`:

```bash
cd /Users/matejkulisek/CLionProjects/skupina_Brdicka_Kulisek/Main
```

2) Přelož a spusť pomocí skriptu:

```bash
chmod +x build_and_run.sh
./build_and_run.sh
```

Tento skript přeloží všechny `.cpp` soubory (`g++`) a spustí výsledný binární soubor `formule_demo`.

Použití CMake (doporučeno pro CLion):

1) Nainstaluj CMake, pokud ho nemáš:

```bash
brew install cmake
```

2) Vytvoř build adresář a sestav projekt:

```bash
cd /Users/matejkulisek/CLionProjects/skupina_Brdicka_Kulisek/Main
mkdir -p build
cd build
cmake ..
cmake --build .
```

3) Spusť program:

```bash
./formule_demo
```

Použití v CLionu:
- Otevři root projektu (`skupina_Brdicka_Kulisek`) v CLionu. V kořenovém adresáři je `CMakeLists.txt`, který přidává `Main` jako subdirectory. CLion načte konfiguraci po instalaci CMake.

Proč se objevila chyba "Undefined symbols"?
- Linker hlásí chybějící symboly, protože při kompilaci jsi pravděpodobně zkompiloval pouze `main.cpp` (nebo chyběl link krok), takže implementace metod z ostatních `.cpp` souborů (Ferrari, Formule, ...) nebyly zahrnuty do linkování. Řešení: přeložit a linkovat všechny `.cpp` soubory najednou (např. `g++ *.cpp -o formule_demo`) nebo použít CMake (které zahrne všechny zdroje podle `CMakeLists.txt`).

Pokud budeš chtít, mohu pomoci s nastavením v CLionu nebo s instalací CMake krok-za-krokem.

