#include "portable_vacuum_cleaner.h" 
#include <iostream>

using namespace std;

PortableVacuum::PortableVacuum(string brand, int power, int batteryLife) : Portable(brand, batteryLife), Appliance(brand, power), brand_(brand){} 

void PortableVacuum::show()
{
    cout << "Portable vacuum: " << "Brand: "  << brand_<< 
            ", power: " << power_ <<
            ", battery life: " << batteryLife_ <<
            endl;
}