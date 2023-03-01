//
// Created by samuel on 2/22/23.
//

#ifndef TEXT_PROCESSOR_TEXTPROCESSOR_H
#define TEXT_PROCESSOR_TEXTPROCESSOR_H


class TextProcessor {

private:
    int option;

public:
    std::string filePath;   //File Path to the text file
    std::string words;      //A string to hold the output, Check TextProcessor.cpp to how it was used

    int getOption(){return option;};       //An Inline function returning the value in option
    void priliminary();
    void makeAllCaps();
    void AppInfo();

};


#endif //TEXT_PROCESSOR_TEXTPROCESSOR_H
