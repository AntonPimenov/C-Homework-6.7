#pragma once
#include <string>
using namespace std;

class IElectronics
{
    public:
        virtual void show() = 0;
        virtual ~IElectronics() = default;
    
};