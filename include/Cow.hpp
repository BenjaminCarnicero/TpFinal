#ifndef COW_H
#define COW_H

#include "MeatProduct.hpp"
using namespace std;

class Cow : public MeatProduct {
   
    public:
        Cow(string _code, string _name, double _price);
        //~Cow();
        void show() override;

};

#endif

