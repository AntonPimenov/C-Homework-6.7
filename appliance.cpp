#include <iostream>
#include "appliance.h"

Appliance::Appliance(string brand, int power) : brand_(brand), power_(power){}

void Appliance::show()
{
    cout << "Марка бытовой техники: " << brand_ << endl;
}

Kitchen::Kitchen(string brand, string model, int power) : Appliance(brand, power), model_(model){}

void Kitchen::show()
{
    cout << "Марка кухонной техники: " <<  brand_ << ", модель: " << model_ << ", мощность: " << power_ <<  endl;
}

Homework::Homework(string brand,  string model, int power) : Appliance(brand, power), model_(model){}

void Homework::show()
{
    cout << "Марка техники для уборки дома: " << brand_ << ", модель: " << model_ << ", мощность: " << power_ << endl;
}