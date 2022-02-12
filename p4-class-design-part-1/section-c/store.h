//
//  store.h
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/6/22.
//

#pragma once
#include "item.h"
#include <vector>

class Store {
private:
    std::vector<Item> items;
    
public:
    Store(std::vector<Item> pItems);
    
    void printItems();
};
