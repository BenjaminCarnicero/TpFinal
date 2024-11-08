#include "Pork.hpp"
#include <iostream>
using namespace std;



Pork::Pork (string _code, string _name, double _price) : MeatProduct (_code, _name, _price) {} 

// Pork::~Pork() {

// }

void Pork::show() {

    cout << "Carne de cerdo: ";
    MeatProduct::show();
}