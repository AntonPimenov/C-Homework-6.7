#pragma once 

#include "IElectronics.h"



class Portable : virtual public IElectronics
{
    public:
        Portable(string brand, int batteryLife);
        void show() override;
    protected:
        int batteryLife_;
        string brand_;    
};

class Laptop final : public Portable
{
    public:
        Laptop(string brand, string model, int batteryLife);
        void show() override;
    private:
        string model_;    
};

class Smartphone final : public Portable
{
    public:
        Smartphone(string brand, string model, int sizeGb, int batteryLife);
        void show() override;
    private:
        string model_;
        int sizeGb_;    
};