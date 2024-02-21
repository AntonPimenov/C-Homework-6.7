#include <iostream>
#include "portable.h"

Portable::Portable(string brand, int batteryLife) : brand_(brand), batteryLife_(batteryLife){}

void Portable::show()
{
    cout << "Марка портативной техники: " << brand_ << endl;
}


Laptop::Laptop(string brand,  string model, int batteryLife) : Portable(brand, batteryLife), model_(model){}

void Laptop::show()
{
    cout << "Марка laptop: " << brand_ << ", модель: " << model_  << ", емкость батареи: " << batteryLife_ << endl;;
}

Smartphone::Smartphone(string brand, string model, int sizeGb, int batteryLife) : Portable(brand, batteryLife), model_(model), sizeGb_(sizeGb){}

void Smartphone::show()
{
    cout << "Марка smartphone: " << brand_ <<
     ", модель: " << model_ <<
     ", объем памяти: " << sizeGb_ <<
     ", емкость батареи: " << batteryLife_ <<  endl;
}
