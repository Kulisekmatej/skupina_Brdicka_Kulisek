#include "Formule.h"

Formule::Formule(const std::string &tym) : nazevTymu(tym), rychlost(0) {}

Formule::~Formule() {}

void Formule::zrychli() {
    rychlost += 20;
    std::cout << "Formule " << nazevTymu << " zrychluje. Aktualni rychlost: " << rychlost << " km/h." << std::endl;
}

void Formule::zvukMotoru() {
    std::cout << "Brum brum..." << std::endl;
}

