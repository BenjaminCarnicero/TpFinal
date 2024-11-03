#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer {
    private:
        string code;
        string name;
        string address;

    public:
        Customer(string _code, string _name, string _address);
        //~Customer();
        string getCode();
        string getName();
        string getAddress();
};






#endif 
