//
// 
//Contributors: Samuel Adesola, Adoche Onaji

#include <iostream>
#include <algorithm>
#include "TextProcessor.h"
#include "fstream"
#include <string>


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
	std::cout << "Enter file name to save it into.ENSURE TO ADD THE EXTENSION:  ";
	std::cin >> filename;
	std::fstream file;

	file.open(filePath, std::ios::in);
	if (file.is_open()) {
		while (!file.eof()) {
			std::ofstream f{ filename,  std::ios::app };
			std::getline(file, words);

			std::transform(std::begin(words), std::end(words), std::begin(words), ::toupper);   //Convert to lowercase using Transform from the algorithm header
			f << words << std::endl;
			f.close();




		}
		std::cout << "FILE SUCCESSFULLY SAVED" << std::endl;

	}
	else {
		std::cout << "Could not read Text File\n";
	}
}



	



void TextProcessor::AppInfo() {
	std::cout << "Kindly Update the App Info\n";
}

void TextProcessor::makeAllSmall() {
	std::cout << "Enter path to text file: ";
	std::cin >> filePath;
	std::cout << "Enter file name to save it into.ENSURE TO ADD THE EXTENSION:  ";
	std::cin >> filename;
	std::ifstream file;

	file.open(filePath, std::ios::in);
	if (file.is_open()) {
		while (!file.eof()) {
			std::ofstream fs{ filename,  std::ios::app };
			std::getline(file, words);

			std::transform(std::begin(words), std::end(words), std::begin(words), ::tolower);   //Convert to lowercase using Transform from the algorithm header
			fs << words << std::endl;
			fs.close();




		}
		std::cout << "FILE SUCCESSFULLY SAVED" << std::endl;

	}
	else {
		std::cout << "Could not read Text File\n";
	}
}
