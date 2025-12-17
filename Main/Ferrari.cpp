#include "Ferrari.h"

Ferrari::Ferrari() : Formule("Ferrari"), turboBoost(true), turboStrength(50) {}

void Ferrari::zvukMotoru() {
    std::cout << "VIIIIIIUUM! (Agresivni zvuk motoru Ferrari)" << std::endl;
}

void Ferrari::pouzijTurbo() {
    if (turboBoost) {
        rychlost += turboStrength;
        std::cout << "Ferrari pouziva turbo! +" << turboStrength << " km/h. Aktualni rychlost: " << rychlost << " km/h." << std::endl;
        turboBoost = false; // jednorazove
    } else {
        std::cout << "Turbo jiz bylo pouzito." << std::endl;
    }
}

