//
//  item.cpp
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/6/22.
//

#include <stdio.h>
#include "item.h"
#include <string>

Item::Item(std::string pName, long pId, double pPrice, int pStock) {
    name = pName;
    id = pId;
    price = pPrice;
    stock = pStock;
}

std::string Item::getName() const {
    return name;
}

long Item::getId() const {
    return id;
}

double Item::getPrice() const {
    return price;
}

int Item::getStock() const {
    return stock;
}

void Item::setStock(int pStock) {
    stock = pStock;
}

std::ostream& operator<<(std::ostream& os, const Item& item) {
    os << std::string("Name: ") << item.getName() << std::string("\nID: ") << std::to_string(item.getId()) << std::string("\nPrice: $") << std::to_string(item.getPrice()) << std::string("\nStock: ") << std::to_string(item.getStock());
    return os;
};
