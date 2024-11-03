#include "Order.hpp"




Order::Order(string _code, Customer* _customer, Employee* _employee) {

    code = _code;
    customer = _customer;
    employee = _employee;

  }

  
  void Order::attach(Article* _article) {

    this->articleList.push_back(_article);
  }


  void Order::getShow () {
    

    cout << "Cliente: " << this->customer->getName() << endl;
    cout << endl;
    cout << endl;

    cout << "Atendido por empleado: " << this->employee->getName() << endl;
    cout << "Cargo: " << this->employee->getJobTittle() << endl;
    cout << endl;
    

    for (Article* article : articleList) {
      
      cout << "Articulo nro: " << article->getCode() << endl;
      cout << "Nombre del articulo: " << article->getName() << endl;
      cout << "Precio del articulo: " << article->getPrice() << endl;
      cout << endl;
    }

    cout << "--------------------------------------------" << endl;

  }