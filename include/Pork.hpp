#ifndef PORK_H
#define PORK_H

#include "MeatProduct.hpp"
using namespace std;

class Pork : public MeatProduct {
   
    public:
        Pork(string _code, string _name, double _price);
        //~Pork();
        void show() override;

};

#endif