#pragma once
#include "Formule.h"

class McLaren : public Formule {
public:
    McLaren();
    void zvukMotoru() override;
};

