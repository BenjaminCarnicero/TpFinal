#include <iostream>

#include "Customer.hpp"
#include "Employee.hpp"
#include "Article.hpp"
#include "Order.hpp"



using namespace std;



int main () {

    cout << "--------------------Ropa de seguridad--------------------\n--------------------PEDIDOS--------------------" << endl;
    cout << endl;
    


    // Cargo clientes
    Customer* customer1 = new Customer ("C001", "Juan Carlos Perez", "Lavalle 3472");
    Customer* customer2 = new Customer ("C002", "Maria Gonzalez", "Ayacucho 2266");
    Customer* customer3 = new Customer ("C003", "Benjamin Carnicero", "Alvarado 4398");

    // Cargo empleados
    Employee* employee1 = new Employee ("E001", "Benito Chavez", "Jefe");
    Employee* employee2 = new Employee ("E002", "Oscar Zeballos", "Vendedor");
    Employee* employee3 = new Employee ("E003", "Victoria Garcia ", "Vendedora");

     // Cargo articulos
    Article* article1 = new Article ("A001", "Traje de seguridad", 43999);
    Article* article2 = new Article ("A002", "Zapatos Negros Talle 45", 78599);
    Article* article3 = new Article ("A003", "Antiparras", 15699);
    Article* article4 = new Article ("A004", "Gorra de seguridad", 22199);



    // Cargo pedidos
    Order* orderCustomer1 = new Order ("0001", customer1, employee1);
    orderCustomer1-> attach(article1);
    orderCustomer1-> attach(article2);
    orderCustomer1-> attach(article3);


    Order* orderCustomer2 = new Order ("0002", customer2, employee2);
    orderCustomer2-> attach(article1);
    orderCustomer2-> attach(article2);
    orderCustomer2-> attach(article3);
    orderCustomer2->attach(article4);
   

    Order* orderCustomer3 = new Order ("0003", customer3, employee3);
    orderCustomer3-> attach(article1);
    orderCustomer3-> attach(article2);
    orderCustomer3-> attach(article3);
    orderCustomer3->attach(article4);


    // Mostrar clientes
    orderCustomer1-> getShow();
    orderCustomer2-> getShow();
    orderCustomer3-> getShow();




    // Libero la memoria 
    
    delete customer1;
    delete customer2;
    delete customer3;
    delete employee1;
    delete employee2;
    delete employee3;
    delete article1;
    delete article2;
    delete article3;
    delete orderCustomer1;
    delete orderCustomer2;
    delete orderCustomer3;



    return 0;

}