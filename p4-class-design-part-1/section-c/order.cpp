//
//  order.cpp
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/6/22.
//

#include <stdio.h>
#include "order.h"

void Order::addItem(Item item) {
    items.push_back(item);
}

double Order::getPrice() const {
    double price = 0;
    
    for(int i = 0; i < items.size(); i++) {
        price += items[i].getPrice();
    }
    
    return price;
}

std::vector<Item> Order::getItems() const {
    return items;
}
