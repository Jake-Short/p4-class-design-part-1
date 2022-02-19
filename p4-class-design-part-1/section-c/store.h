//
//  store.h
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/6/22.
//

#pragma once
#include "item.h"
#include <vector>
#include "order.h"

class Store {
private:
    std::vector<Item> items;
    
public:
    Store(std::vector<Item> pItems);
    std::vector<Item> getItems() const;
    void processOrder(const Order& order);
};

std::ostream& operator<<(std::ostream& os, const Store& store);
