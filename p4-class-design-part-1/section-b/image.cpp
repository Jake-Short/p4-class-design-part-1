//
//  image.cpp
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/5/22.
//

#include "image.h"
#include <string>
#include <iostream>

Image::Image(std::string pFileName, std::string pImageType, double pDateCreated, double pSize, std::string pAuthorName, int pWidth, int pHeight, std::string pApertureSize, std::string pExposureTime, int pIsoValue, bool pFlashEnabled): fileName { pFileName }, imageType { pImageType }, dateCreated { pDateCreated }, size { pSize }, authorName { pAuthorName }, width { pWidth }, height { pHeight }, apertureSize { pApertureSize }, exposureTime { pExposureTime }, isoValue { pIsoValue }, flashEnabled { pFlashEnabled } {
    // Call setter functions for all values
    // (this will ensure any invalid data is
    // caught by the validation in some of these methods)
    setFileName(pFileName);
    setImageType(pImageType);
    setDateCreated(pDateCreated);
    setSize(pSize);
    setAuthorName(pAuthorName);
    setWidth(pWidth);
    setHeight(pHeight);
    setApertureSize(pApertureSize);
    setExposureTime(pExposureTime);
    setIsoValue(pIsoValue);
    setFlashEnabled(pFlashEnabled);
};

//
// Getter/setter functions
//

std::string Image::getFileName() const {
    return fileName;
}
void Image::setFileName(std::string pFileName) {
    fileName = pFileName;
}

std::string Image::getImageType() const {
    return imageType;
}
void Image::setImageType(std::string pImageType) {
    if(pImageType != "PNG" && pImageType != "GIF" && pImageType != "JPEG") {
        throw std::invalid_argument("Invalid image type");
    }
    else {
        imageType = pImageType;
    }
}

double Image::getDateCreated() const {
    return dateCreated;
}
void Image::setDateCreated(double pDateCreated) {
    dateCreated = pDateCreated;
}

double Image::getSize() const {
    return size;
}
void Image::setSize(double pSize) {
    size = pSize;
}

std::string Image::getAuthorName() const {
    return authorName;
}
void Image::setAuthorName(std::string pAuthorName) {
    authorName = pAuthorName;
}

int Image::getWidth() const {
    return width;
}
void Image::setWidth(int pWidth) {
    width = pWidth;
}

int Image::getHeight() const {
    return height;
}
void Image::setHeight(int pHeight) {
    height = pHeight;
}

std::string Image::getApertureSize() const {
    return apertureSize;
}
void Image::setApertureSize(std::string pApertureSize) {
    apertureSize = pApertureSize;
}

std::string Image::getExposureTime() const {
    return exposureTime;
}
void Image::setExposureTime(std::string pExposureTime) {
    exposureTime = pExposureTime;
}

int Image::getIsoValue() const {
    return isoValue;
}
void Image::setIsoValue(int pIsoValue) {
    isoValue = pIsoValue;
}

bool Image::getFlashEnabled() const {
    return flashEnabled;
}
void Image::setFlashEnabled(bool pFlashEnabled) {
    flashEnabled = pFlashEnabled;
}

// Non-member functions
void printImageMetadata(Image img) {
    std::cout << "File Name: " + img.getFileName() << std::endl;
    std::cout << "Image Type: " + img.getImageType() << std::endl;
    std::cout << "Date Created (ms since 1970): " + std::to_string(img.getDateCreated()) << std::endl;
    std::cout << "Size (MB): " + std::to_string(img.getSize()) << std::endl;
    std::cout << "Author: " + img.getAuthorName() << std::endl;
    std::cout << "Width: " + std::to_string(img.getWidth()) << std::endl;
    std::cout << "Height: " + std::to_string(img.getHeight()) << std::endl;
    std::cout << "Aperture Size: " + img.getApertureSize() << std::endl;
    std::cout << "Exposure Time: " + img.getExposureTime() << std::endl;
    std::cout << "ISO Value: " + std::to_string(img.getIsoValue()) << std::endl;
    std::cout << "Flash Enabled: " + std::string(img.getFlashEnabled() == true ? "True" : "False") << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Image& img) {
    os << "File Name: " + img.getFileName() << std::endl;
    os << "Image Type: " + img.getImageType() << std::endl;
    os << "Date Created (ms since 1970): " + std::to_string(img.getDateCreated()) << std::endl;
    os << "Size (MB): " + std::to_string(img.getSize()) << std::endl;
    os << "Author: " + img.getAuthorName() << std::endl;
    os << "Width: " + std::to_string(img.getWidth()) << std::endl;
    os << "Height: " + std::to_string(img.getHeight()) << std::endl;
    os << "Aperture Size: " + img.getApertureSize() << std::endl;
    os << "Exposure Time: " + img.getExposureTime() << std::endl;
    os << "ISO Value: " + std::to_string(img.getIsoValue()) << std::endl;
    os << "Flash Enabled: " + std::string(img.getFlashEnabled() == true ? "True" : "False");
    
    return os;
};
