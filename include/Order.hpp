#ifndef ORDER_H
#define ORDER_H


#include <iostream>
#include <string>
#include <list>

#include "Article.hpp"
#include "Customer.hpp"
#include "Employee.hpp"


using namespace std;


class Order {
    private:
        string code;
        Customer* customer;
        Employee* employee;
        list<Article*> articleList;
        
    
    public:
        Order(string _code, Customer* _customer, Employee* _employee);
        // ~Order();
        void attach (Article* _article);
        void getShow();

        
};



#endif