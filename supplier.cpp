#ifndef SUPPLIER 
#define SUPPLIER

#include "shop.cpp"
#include<string>
#include<vector>
#include"product.cpp"
#include"food_product.cpp"
#include"paper_product.cpp"
#include<iostream>

using namespace std;

class Supplier{
private:
    Shop* shop;
public:
    Supplier(Shop* shop){
        this->shop = shop;
    }
    void deliverProduct(Product* product){
        shop->addToStore(product);
    }

};
#endif 