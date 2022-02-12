//
//  weburl.h
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/5/22.
//

#pragma once
#include <string>

class WebURL {
private:
    std::string url;
    
public:
    WebURL(std::string urlString);
    
    std::string getFullUrl();
    std::string getScheme();
    std::string getAuthority();
    std::string getPath();
};
