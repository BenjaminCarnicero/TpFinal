#include "Order.hpp"




Order::Order(string _code, Customer* _customer, Employee* _employee) {

    code = _code;
    customer = _customer;
    employee = _employee;

  }

  
void Order::attachDetails(OrderDetails* _orderDetails) {

    this->orderDetailsList.push_back(_orderDetails);
  }



void Order::showOrder () {
  double totalPrice = 0;
    
  cout << "-------------------PRODUCTOS CARNICOS---------------------------" << endl;
  cout << "Codigo de la orden: " << code << endl;
  cout << "Cliente: " << customer->getName() << endl;
  cout << endl;
  cout << "Atendido por empleado: " << employee->getName() << endl;
  cout << "Cargo: " << employee->getJobTittle() << endl;
  cout << endl;
  cout << "--------------------------------------------" << endl;

  // Recorrer cada OrderDetails en la lista y mostrar sus detalles
  for (OrderDetails* orderDetails : orderDetailsList) {
      orderDetails->showOrDetails();  // Llama a showOrDetails para mostrar cada detalle del producto
      totalPrice += orderDetails->setSubtotal();  // Sumo el subtotal de cada detalle
  }

  cout << "--------------------------------------------" << endl;
  cout << endl;
  cout << "Precio total de la orden: $" << totalPrice << endl;
  cout << "--------------------------------------------" << endl;
  cout << endl;
  cout << "Gracias por su compra. " << endl;
  cout << endl;

  }