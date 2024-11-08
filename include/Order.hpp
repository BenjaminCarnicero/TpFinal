#ifndef ORDER_H
#define ORDER_H


#include <iostream>
#include <string>
#include <list>

#include "MeatProduct.hpp"
#include "OrderDetails.hpp"
#include "Customer.hpp"
#include "Employee.hpp"


using namespace std;


class Order {
    private:
        string code;
        Customer* customer;
        Employee* employee;
        list<OrderDetails*> orderDetailsList;
        
    
    public:
        Order(string _code, Customer* _customer, Employee* _employee);
        // ~Order();
        void attachDetails (OrderDetails* _orderDetails);
        void showOrder();
        

        
};



#endif