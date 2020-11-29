// CppBank v 0.4
#include <iostream>
#include "BankHelper.h"

int main() {
	
	std::cout << R"(  _____  _           ____              _    
 |  __ \| |         |  _ \            | |   
 | |__) | |_   _ ___| |_) | __ _ _ __ | | __
 |  ___/| | | | / __|  _ < / _` | '_ \| |/ /
 | |    | | |_| \__ \ |_) | (_| | | | |   < 
 |_|    |_|\__,_|___/____/ \__,_|_| |_|_|\_\
                                            
                                           )"  << std::endl;
	
	std::cout << "Let's create your account" << std::endl;
	
	CreateAccount();
	
	return 0;
}


//TO-DO:
