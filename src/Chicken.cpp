#include "Chicken.hpp"
#include <iostream>
using namespace std;



Chicken::Chicken (string _code, string _name, double _price) : MeatProduct (_code, _name, _price) {} // me traigo explicitamente los parametros de MeatProduct

// Chicken::~Chicken() {

// }

void Chicken::show() {

    cout << "Pollo: ";
    MeatProduct::show();
}



