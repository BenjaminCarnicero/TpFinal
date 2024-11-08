#ifndef CHICKEN_H
#define CHICKEN_H

#include "MeatProduct.hpp"
using namespace std;

class Chicken : public MeatProduct {
   
    public:
        Chicken(string _code, string _name, double _price);
        //~Chicken();
        void show() override; // sobrecargo metodo show

};

#endif
