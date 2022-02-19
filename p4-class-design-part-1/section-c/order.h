//
//  order.h
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/6/22.
//

#pragma once
#include <vector>
#include "item.h"

class Order {
private:
    std::vector<Item> items;
    
public:
    void addItem(Item item);
    double getPrice() const;
    std::vector<Item> getItems() const;
};
