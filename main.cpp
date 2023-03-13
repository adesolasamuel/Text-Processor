//
//contributors: Samuel Adesola, Adoche Onaji
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