#include "portable_vacuum_cleaner.h" 
#include <iostream>

using namespace std;

PortableVacuum::PortableVacuum(string brand, int power, int batteryLife) : Portable(brand, batteryLife), Appliance(brand, power){} 

void PortableVacuum::show()
{
    cout << "Portable vacuum: " <<
            ", power: " << power_ <<
            ", battery life: " << batteryLife_ <<
            endl;
}