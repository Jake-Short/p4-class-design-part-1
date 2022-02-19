//
//  main.cpp
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/6/22.
//

#include <stdio.h>
#include <iostream>
#include "main.h"
#include "weburl.h"
#include "image.h"
#include "store.h"
#include "order.h"

int main() {
    WebURL url{ "https://foo.com/foo" };
    std::cout << url << std::endl << std::endl;
    
    Image img{ "mycoolimage.png", "PNG", 1644171277655, 256, "Jake", 500, 500, "f/8", "1/30", 600, true };
    std::cout << img << std::endl << std::endl;
    
    std::vector<Item> items;
    Item foo{ "Fun Book", 3930922081, 1, 5 };
    std::cout << "ITEM: " << std::endl << foo << std::endl << std::endl;
    
    items.push_back(Item{ "Fun Book", 12, 1, 5 });
    items.push_back(Item{ "Pencils", 13, 50, 10 });
    Store itemStore(items);
    
    Order itemsOrder{};
    itemsOrder.addItem(Item{ "Fun Book", 12, 1, 3 });
    
    std::cout << itemStore << std::endl;
    
    std::cout << "Order:" << std::endl;
    for(Item i: itemsOrder.getItems()) {
        std::cout << i << "\n----------\n";
    }
    
    itemStore.processOrder(itemsOrder);
    
    std::cout << std::endl << itemStore;
    
    return 0;
}
