#ifndef ORDERDETAILS_H
#define ORDERDETAILS_H


#include <iostream>
#include <string>
#include <list>

#include "MeatProduct.hpp"
#include "Customer.hpp"
#include "Employee.hpp"


using namespace std;


class OrderDetails {
    private:
        int quantity;
        list<MeatProduct*> meatProductList;
        double totalPrice;
        
        
    
    public:
        OrderDetails(int _quantity, double _totalPrice);
        // ~OrderDetails();
        int getQuantity();
        double setSubtotal();
        void attachProducts(MeatProduct* _meatProduct);
        void showOrDetails();

        

        
};



#endif