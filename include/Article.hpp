#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>
using namespace std;

class Article {
    private:
        string code;
        string name;
        double price;

    public:
        Article(string _code, string _name, double _price);
        //~Article();
        string getCode();
        string getName();
        double getPrice();
};





#endif 