#pragma once
#include <iostream>
#include <string>

class Formule {
protected:
    std::string nazevTymu;
    int rychlost;

public:
    Formule(const std::string &tym);
    virtual ~Formule();

    void zrychli();
    virtual void zvukMotoru();
};
