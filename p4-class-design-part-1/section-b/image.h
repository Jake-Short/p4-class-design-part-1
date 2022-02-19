//
//  image.h
//  p4-class-design-part-1
//
//  Created by Jake Short on 2/5/22.
//

#pragma once
#include <string>

class Image {
private:
    std::string fileName;
    std::string imageType;
    double dateCreated;
    double size;
    std::string authorName;
    int width;
    int height;
    std::string apertureSize;
    std::string exposureTime;
    int isoValue;
    bool flashEnabled;
    
public:
    Image(std::string pFileName, std::string pImageType, double pDateCreated, double pSize, std::string pAuthorName, int pWidth, int pHeight, std::string pApertureSize, std::string pExposureTime, int pIsoValue, bool pFlashEnabled);
    
    std::string getFileName() const;
    std::string getImageType() const;
    double getDateCreated() const;
    double getSize() const;
    std::string getAuthorName() const;
    int getWidth() const;
    int getHeight() const;
    std::string getApertureSize() const;
    std::string getExposureTime() const;
    int getIsoValue() const;
    bool getFlashEnabled() const;
    
    void setFileName(std::string pFileName);
    void setImageType(std::string pImageType);
    void setDateCreated(double pDateCreated);
    void setSize(double pSize);
    void setAuthorName(std::string pAuthorName);
    void setWidth(int pWidth);
    void setHeight(int pHeight);
    void setApertureSize(std::string pApertureSize);
    void setExposureTime(std::string pExposureTime);
    void setIsoValue(int pIsoValue);
    void setFlashEnabled(bool pFlashEnabled);
};

std::ostream& operator<<(std::ostream& os, const Image& img);
