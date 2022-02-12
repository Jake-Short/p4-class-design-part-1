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
    std::cout << url.getFullUrl() << std::endl;
    std::cout << url.getScheme() << std::endl;
    std::cout << url.getAuthority() << std::endl << std::endl;
    std::cout << url.getPath() << std::endl;
    
    Image img{ "mycoolimage.png", "PNG", 1644171277655, 256, "Jake", 500, 500, "f/8", "1/30", 600, true };
    printImageMetadata(img);
    
    std::cout << std::endl;
    
    std::vector<Item> books;
    books.push_back(Item{ "Fun Book", 3930922081, 1, 5 });
    books.push_back(Item{ "Pencils", 3930922082, 50, 10 });
    Store bookStore(books);
    
    Order booksOrder{};
    booksOrder.addItem(Item{ "Fun Book", 3930922081, 1, 5 });
    booksOrder.addItem(Item{ "Pencils", 3930922082, 50, 10 });
    booksOrder.addItem(Item{ "Pencils", 3930922082, 50, 10 });
    
    bookStore.printItems();
    std::cout << std::endl << "Order:" << std::endl;
    std::cout << "$" << std::to_string(booksOrder.getPrice()) << std::endl;
    
    return 0;
}
