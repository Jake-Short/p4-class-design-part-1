//
//  store.cpp
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/6/22.
//

#include <stdio.h>
#include "store.h"
#include <iostream>

Store::Store(std::vector<Item> pItems) {
    items = pItems;
}

std::vector<Item> Store::getItems() const {
    return items;
}

void Store::processOrder(const Order& order) {
    std::vector<Item> orderItems = order.getItems();

    for(Item item: orderItems) {
        for(Item& iInStore: items) {
            if(iInStore.getId() == item.getId()) {
                iInStore.setStock(iInStore.getStock() - item.getStock());
            }
        }
    }
}

std::ostream& operator<<(std::ostream& os, const Store& store) {
    os << std::string("Store: \n");
    for(int i = 0; i < store.getItems().size(); i++) {
        os << store.getItems()[i].getName() << std::string(" x ") << std::to_string(store.getItems()[i].getStock()) << std::string("\n");
    }
    
    return os;
};
