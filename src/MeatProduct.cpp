#include <iostream>
#include "MeatProduct.hpp"

using namespace std;

MeatProduct::MeatProduct (string _code, string _name, double _price) {

    code = _code;
    name = _name;
    price = _price; 

}


string MeatProduct::getCode () {

    return this->code;
}


string MeatProduct::getName () {

    return this->name;
}


double MeatProduct::getPrice () {

    return this->price;
}

void MeatProduct::show(){
    cout << "\nCod: " << code << "\nNombre: " << name << "\nPrecio Unitario: " << price << " \n";
}
