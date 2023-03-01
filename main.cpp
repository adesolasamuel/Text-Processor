//
// Created by samuel on 2/22/23.
//

#include <iostream>
#include "TextProcessor.h"

int main(){

    TextProcessor processor;
    processor.priliminary();

    if(processor.getOption() == 1){     // Test Input to determine function call
        processor.makeAllCaps();
    }



    processor.AppInfo();

}