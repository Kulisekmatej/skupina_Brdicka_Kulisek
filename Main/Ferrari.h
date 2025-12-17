#pragma once
#include "Formule.h"

class Ferrari : public Formule {
private:
    bool turboBoost;
    int turboStrength;

public:
    Ferrari();
    void zvukMotoru() override;
    void pouzijTurbo();
};

