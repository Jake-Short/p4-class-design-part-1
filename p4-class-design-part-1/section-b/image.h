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
    
    std::string getFileName();
    std::string getImageType();
    double getDateCreated();
    double getSize();
    std::string getAuthorName();
    int getWidth();
    int getHeight();
    std::string getApertureSize();
    std::string getExposureTime();
    int getIsoValue();
    bool getFlashEnabled();
    
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

void printImageMetadata(Image img);
