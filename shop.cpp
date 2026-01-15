#ifndef SHOP
#define SHOP

#include<string>
#include<vector>
#include"product.cpp"
#include"food_product.cpp"
#include"paper_product.cpp"
#include<iostream>

using namespace std;

class Shop{
private:
    vector<Product*> products;

public:
    void addToStore(Product* product){
        products.push_back(product);
    }

    void sellProduct(string name){
        for(int i = 0; i < products.size(); i++){
            if(products[i]->getName() == name){
                products.erase(products.begin() + i);
                return;
            }
        }
    }

    bool checkAvailability(string name){
        for(int i = 0; i < products.size(); i++){
            if(products[i]->getName() == name){
                return true;
            }
        }
        return false;
    }

    string printProductsList(){
        string result = "";
        for(int i = 0; i < products.size(); i++){
            result += products[i]->getName() + "\n";
        }
        return result;
    }

    string printProductsListByType(string type){
        string result = "";
        for(int i = 0; i < products.size(); i++){
            if(products[i]->getProductType() == type){
                result += products[i]->getName() + "\n";
            }
        }
        return result;
    }
};

#endif