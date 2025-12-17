#pragma once
#include "Formule.h"

class Mercedes : public Formule {
public:
    Mercedes();
    void zvukMotoru() override;
};

