#include "Customer.hpp"




Customer::Customer(string _code, string _name, string _address) {
    code = _code;
    name = _name;
    address = _address;

}

// Customer::~Customer() {

// }


string Customer::getCode () {
    return this->code;

}


string Customer::getName () {
    return this->name;
    
}


string Customer::getAddress () {
    return this->address;
    
}