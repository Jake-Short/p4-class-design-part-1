//
//  item.h
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/6/22.
//

#pragma once
#include <string>

class Item {
private:
    std::string name;
    long id;
    double price;
    int stock;
    
public:
    Item(std::string pName, long pId, double pPrice, int pStock);
    
    std::string getName();
    long getId();
    double getPrice();
    int getStock();
};
