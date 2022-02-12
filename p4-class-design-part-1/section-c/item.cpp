//
//  item.cpp
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/6/22.
//

#include <stdio.h>
#include "item.h"

Item::Item(std::string pName, long pId, double pPrice, int pStock) {
    name = pName;
    id = pId;
    price = pPrice;
    stock = pStock;
}

std::string Item::getName() {
    return name;
}

long Item::getId() {
    return id;
}

double Item::getPrice() {
    return price;
}

int Item::getStock() {
    return stock;
}
