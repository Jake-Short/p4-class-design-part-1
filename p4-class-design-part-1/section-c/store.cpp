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

void Store::printItems() {
    std::cout << "Store: " << std::endl;
    for(int i = 0; i < items.size(); i++) {
        std::cout << items[i].getName() << " x " << items[i].getStock() << std::endl;
    }
};
