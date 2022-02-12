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

double Order::getPrice() {
    double price = 0;
    
    for(int i = 0; i < items.size(); i++) {
        price += items[i].getPrice();
    }
    
    return price;
}
