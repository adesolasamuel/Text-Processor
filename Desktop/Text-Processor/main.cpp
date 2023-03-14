//
//contributors: Samuel Adesola, Adoche Onaji
//

#include <iostream>
#include "TextProcessor.h"

int main() {

	TextProcessor processor;
	processor.priliminary();

	if (processor.getOption() == 1) {     // Test Input to determine function call
		processor.makeAllCaps();
	}
	if (processor.getOption() == 2) {   // Test Input to determine function call
		processor.makeAllSmall();
	}




	processor.AppInfo();

}