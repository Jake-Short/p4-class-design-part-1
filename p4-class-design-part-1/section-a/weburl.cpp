//
//  weburl.cpp
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/5/22.
//

#include "weburl.h"
#include <string>

WebURL::WebURL(std::string urlString): url{ urlString } {
    url = urlString;
}

std::string WebURL::getFullUrl() const {
    return url;
}

std::string WebURL::getScheme() const {
    // Find the index of the first "/" of the "//" substring
    int slashSlashIndex = (int)url.find("//");
    std::string scheme = url.substr(0, slashSlashIndex);

    return scheme;
}

std::string WebURL::getAuthority() const {
    std::string tempUrl = url;

    // Find the index of the first "/" of the "//" substring
    int slashSlashIndex = (int)tempUrl.find("//");
    std::string scheme = tempUrl.substr(0, slashSlashIndex);

    // Set input to remaining string starting with the "//"
    tempUrl = tempUrl.substr(slashSlashIndex + 2, tempUrl.length());

    // Find the beginning of the path
    int pathBeginIndex = (int)tempUrl.find("/");
    std::string authority = "//" + tempUrl.substr(0, pathBeginIndex);

    return authority;
};

std::string WebURL::getPath() const {
    std::string tempUrl = url;

    // Find the index of the first "/" of the "//" substring
    int slashSlashIndex = (int)tempUrl.find("//");
    std::string scheme = tempUrl.substr(0, slashSlashIndex);

    // Set input to remaining string starting with the "//"
    tempUrl = tempUrl.substr(slashSlashIndex + 2, tempUrl.length());

    // Find the beginning of the path
    int pathBeginIndex = (int)tempUrl.find("/");
    std::string authority = "//" + tempUrl.substr(0, pathBeginIndex);

    // Set the input equal to the rest of the string (the path)
    // and initialize path variable that is equal to the input
    tempUrl = tempUrl.substr(pathBeginIndex, tempUrl.length());
    std::string path = tempUrl;

    return path;
};


std::ostream& operator<<(std::ostream& os, const WebURL& url) {
    std::string urlString = "URL: " + url.getFullUrl() + "\nSCHEME: " + url.getScheme() + "\nAUTHORITY: " + url.getAuthority() + "\nPATH: " + url.getPath();
    os << urlString;
    return os;
}
