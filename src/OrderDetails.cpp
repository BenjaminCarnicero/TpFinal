#include "OrderDetails.hpp"
#include <iostream>
using namespace std;




OrderDetails::OrderDetails(int _quantity, double _totalPrice ) {

    quantity = _quantity;
    totalPrice = _totalPrice;

  }

  
void OrderDetails::attachProducts(MeatProduct* _meatProduct) {

    this->meatProductList.push_back(_meatProduct);
  }

int OrderDetails::getQuantity(){
    return this->quantity;

}

double OrderDetails::setSubtotal() {

    double subTotal = 0;
    
    for (MeatProduct* MeatProduct : meatProductList) {
        subTotal += (MeatProduct->getPrice())*quantity;
    }
    
    return subTotal;
}

void OrderDetails::showOrDetails () {
  cout << endl;
  cout << "Detalles de la orden de compra: " << endl;
  cout << endl;

  for (MeatProduct* meatProduct : meatProductList) {
    meatProduct->show();
    cout << "Cantidad: " << quantity << endl;
    cout << "Subtotal: $" << meatProduct->getPrice() * quantity << endl;
    cout << "--------------------------------------------" << endl;
    }
    cout << "Subtotal: $" << setSubtotal() << endl;
}


        

