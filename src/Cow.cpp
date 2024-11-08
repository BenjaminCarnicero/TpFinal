#include "Cow.hpp"
#include <iostream>
using namespace std;



Cow::Cow (string _code, string _name, double _price) : MeatProduct (_code, _name, _price) {}

// Cow::~Cow() {

// }

void Cow::show() {

    cout << "Carne de vaca: ";
    MeatProduct::show();
}