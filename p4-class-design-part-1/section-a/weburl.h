//
//  weburl.h
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/5/22.
//

#pragma once
#include <iostream>
#include <string>

class WebURL {
private:
    std::string url;
    
public:
    WebURL(std::string urlString);
    
    std::string getFullUrl() const;
    std::string getScheme() const;
    std::string getAuthority() const;
    std::string getPath() const;
};

std::ostream& operator<<(std::ostream& os, const WebURL& _url);
