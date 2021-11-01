#ifndef CUPOM_H
#define CUPOM_H

#include <iostream>
#include <string>

using namespace std;

// Interface

class Cupom {

public:

    Cupom(string pId, string pDescription, int pAmount, float pPrice); // p = parameter
    
    void setId(string pId);
    void setDescription(string pDescription);
    void setAmount(int pAmount);
    void setPrice(float pPrice);

    string getId();
    string getDescription();
    int getAmount();
    float getPrice();

    float calculaCupom();

private:
    string id, description;
    int amount;
    float price;
};

#endif

// Implementação

Cupom::Cupom(string pId, string pDescription, int pAmount, float pPrice) {

    setId(pId);
    setDescription(pDescription);
    setAmount(pAmount);
    setPrice(pPrice);
}
    
void Cupom::setId(string pId){
    id = pId;
}

void Cupom::setDescription(string pDescription){
    description = pDescription;
}

void Cupom::setAmount(int pAmount){
    if (pAmount < 0)
        amount = 0;
    else
        amount = pAmount;
}

void Cupom::setPrice(float pPrice){
    if (pPrice < 0)
        price = 0;
    else
        price = pPrice;
}


string Cupom::getId(){
    return id;
}

string Cupom::getDescription(){
    return description;
}

int Cupom::getAmount() {
    return amount;
}

float Cupom::getPrice(){
    return price;
}

float Cupom::calculaCupom() {
    return (getAmount() * getPrice());
}
