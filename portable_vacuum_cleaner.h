#pragma once
#include "portable.h"
#include "appliance.h"

class PortableVacuum : public Portable, Appliance
{
    public:
        PortableVacuum(string brand, int power, int batteryLife);
        void show() override;
    private:
        string brand_;    
};