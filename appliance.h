#pragma once 

#include "IElectronics.h"

class Appliance : virtual public IElectronics
{
    public:
        Appliance(string brand, int power);
        void show() override;
    protected:
        int power_;
        string brand_;    
};

class Kitchen : public Appliance
{
    public:
        Kitchen(string brand, string model, int power);
        void show() override;

    protected:
        string model_;    
};

class Homework : public Appliance
{   
    public:
        Homework(string brand, string model,int power);
        void show() override;
    protected:
        string model_;    
};