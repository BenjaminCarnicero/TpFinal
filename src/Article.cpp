#include "Article.hpp"


Article::Article (string _code, string _name, double _price) {

    code = _code;
    name = _name;
    price = _price; 

}


string Article::getCode () {

    return this->code;
}


string Article::getName () {

    return this->name;
}


double Article::getPrice () {

    return this->price;
}


