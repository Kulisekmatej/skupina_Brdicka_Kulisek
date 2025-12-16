#include "Formule.h"


int main() {
    Ferrari ferrari;
    Mercedes mercedes;
    RedBull redBull;
    McLaren mclaren;

    std::cout << "=== FORMULA 1 SHOW ===" << std::endl << std::endl;

    ferrari.zrychli();
    ferrari.zvukMotoru();
    std::cout << std::endl;

    mercedes.zrychli();
    mercedes.zvukMotoru();
    std::cout << std::endl;

    redBull.zrychli();
    redBull.zvukMotoru();
    std::cout << std::endl;

    mclaren.zrychli();
    mclaren.zvukMotoru();
    std::cout << std::endl;

    return 0;
}

