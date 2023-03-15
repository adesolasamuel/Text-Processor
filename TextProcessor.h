//
// 
//Contributors: Samuel Adesola, Adoche Onaji

#pragma once


class TextProcessor {

private:
    int option;

public:
    std::string filePath;   //File Path to the text file
    std::string words;      //A string to hold the output, Check TextProcessor.cpp to how it was used
    std::string filename

    int getOption(){return option;};       //An Inline function returning the value in option
    void priliminary();
    void makeAllCaps();
void makeAllSmall();
    void AppInfo();

};



