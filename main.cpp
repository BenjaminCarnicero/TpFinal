#include <iostream>

#include "Customer.hpp"
#include "Employee.hpp"
#include "MeatProduct.hpp"
#include "Chicken.hpp"
#include "Cow.hpp"
#include "Pork.hpp"
#include "OrderDetails.hpp"
#include "Order.hpp"



using namespace std;



int main () {


    
    // Cargo clientes
    Customer* customer1 = new Customer ("C001", "Juan Carlos Perez", "Lavalle 3472");
    Customer* customer2 = new Customer ("C002", "Maria Gonzalez", "Ayacucho 2266");
    Customer* customer3 = new Customer ("C003", "Benjamin Carnicero", "Alvarado 4398");

    // Cargo empleados
    Employee* employee1 = new Employee ("E001", "Benito Chavez", "Jefe");
    Employee* employee2 = new Employee ("E002", "Oscar Zeballos", "Vendedor");
    Employee* employee3 = new Employee ("E003", "Victoria Garcia ", "Vendedora");

     // Cargo productos
    MeatProduct* chicken1 = new Chicken("P001", "Pollo Entero", 1500.0);
    MeatProduct* chicken2 = new Chicken("P002", "Pata Muslo", 2599.0);
    MeatProduct* cow1 = new Cow("P003", "Bife de Chorizo", 6550.0);
    MeatProduct* cow2 = new Cow("P004", "Milanesa de carne", 3550.0);
    MeatProduct* pork1 = new Pork("P005", "Milanesa de Cerdo", 1999.0);
    MeatProduct* pork2 = new Pork("P006", "Costilla de Cerdo", 2340.0);


    // Cargo algunos detalles de pedidos (cantidad exacta por producto)
    OrderDetails* orderDetails1 = new OrderDetails(2, 0); // Cantidad (y precio en 0)
    orderDetails1->attachProducts(chicken1);
    OrderDetails* orderDetails2 = new OrderDetails(4, 0); 
    orderDetails1->attachProducts(chicken2);

    OrderDetails* orderDetails3 = new OrderDetails(1, 0);
    orderDetails2->attachProducts(cow1);
    OrderDetails* orderDetails4 = new OrderDetails(6, 0);
    orderDetails2->attachProducts(cow2);

    OrderDetails* orderDetails5 = new OrderDetails(3, 0);
    orderDetails3->attachProducts(pork1);



    // Cargo algunos pedidos
    Order* orderCustomer1 = new Order ("0001", customer1, employee1);
    orderCustomer1-> attachDetails(orderDetails2);
    orderCustomer1-> attachDetails(orderDetails3);


    Order* orderCustomer2 = new Order ("0002", customer2, employee2);
    orderCustomer2-> attachDetails(orderDetails1);
    orderCustomer2-> attachDetails(orderDetails3);
    orderCustomer2-> attachDetails(orderDetails5);
   

    Order* orderCustomer3 = new Order ("0003", customer3, employee3);
    orderCustomer3-> attachDetails(orderDetails1);
    orderCustomer3-> attachDetails(orderDetails2);
    orderCustomer3-> attachDetails(orderDetails3);
    orderCustomer3->attachDetails(orderDetails4);


    // Mostrar pedidos
    cout << "Orden de Compra Nro 1 " << endl;
    orderCustomer1-> showOrder();
    cout << "Orden de Compra Nro 2 " << endl;
    orderCustomer2-> showOrder();
    cout << "Orden de Compra Nro 3 " << endl;
    orderCustomer3-> showOrder();




    // Libero la memoria 
    
    delete customer1;
    delete customer2;
    delete customer3;
    delete employee1;
    delete employee2;
    delete employee3;
    delete chicken1;
    delete chicken2;
    delete cow1;
    delete cow2;
    delete pork1;
    delete pork2;
    delete orderDetails1;
    delete orderDetails2;
    delete orderDetails3;
    delete orderDetails4;
    delete orderDetails5;
    delete orderCustomer1;
    delete orderCustomer2;
    delete orderCustomer3;



    return 0;

}