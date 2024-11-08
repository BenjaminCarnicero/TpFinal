#ifndef MEATPRODUCT_H
#define MEATPRODUCT_H

#include <string>
using namespace std;

class MeatProduct {
    protected: // atributos protegidos
        string code;
        string name;
        double price;

    public:
        MeatProduct(string _code, string _name, double _price);
        virtual ~MeatProduct() {} // Destructor virtual para los delete
        string getCode();
        string getName();
        double getPrice();
        virtual void show() = 0; // Metodo virtual puro (clase abstracta)

};





#endif 