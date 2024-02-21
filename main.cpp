#include <iostream>
#include <string>
#include "portable.h"
#include "appliance.h"
#include "portable_vacuum_cleaner.h"

int main()
{
    IElectronics *technics[4];

    technics[0] = new Laptop("samsung", "Tab 8", 30);
    technics[1] = new Smartphone("Iphone", "14pro MAX", 256, 25);
    technics[2] = new Kitchen("Gorenia", "BKQ-23", 1200);
    technics[3] = new PortableVacuum("red", 23, 15);


    technics[0]->show();
    technics[1]->show();
    technics[2]->show();
    technics[3]->show();

    delete technics[0];
    delete technics[1];
    delete technics[2];
    delete technics[3];

}
