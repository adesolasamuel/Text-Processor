//
// 
//Contributors: Samuel Adesola, Adoche Onaji

#include <iostream>
#include <algorithm>
#include "TextProcessor.h"
#include "fstream"

void TextProcessor::priliminary() {
    std::cout << "WELCOME TO TEST PROCESSOR\n";
    std::cout << "Please Select an option below on the type of operation to be performed:\n";
    std::cout << "1. Convert to Upper Case\n";
    std::cout << "2. Convert to Lower Case\n";
    std::cout << "3. Count Number of words\n";
    std::cout << "4. Count general Number of letters\n";
    std::cout << "5. Count number of letters base on occurrences\n";
    std::cin >> option;

}

void TextProcessor::makeAllCaps() {
    std::cout << "Enter path to text file: ";
    std::cin >> filePath;
    std::fstream file;
    file.open(filePath, std::ios::in);
    if(file.is_open()){
        while (file >> words){
            std::transform(std::begin(words), std::end(words), std::begin(words), ::toupper);   //Convert to uppercase using Transform from the algorithm header
            std::cout << words << std::endl;
        }
    }
    else{
        std::cout << "Could not read Text File\n";
    }

}

void TextProcessor::AppInfo() {
    std::cout << "Kindly Update the App Info\n";
}