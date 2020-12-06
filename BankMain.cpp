// PlusBank v 0.4


#include <iostream>
#include "BankHelper.h"

using namespace std;

int main() {

	cout << R"(  _____  _           ____              _    
 |  __ \| |         |  _ \            | |   
 | |__) | |_   _ ___| |_) | __ _ _ __ | | __
 |  ___/| | | | / __|  _ < / _` | '_ \| |/ /
 | |    | | |_| \__ \ |_) | (_| | | | |   < 
 |_|    |_|\__,_|___/____/ \__,_|_| |_|_|\_\
                                            
                                           )" << endl;



	cout << "1 - Create account\n";
	cout << "2 - Login\n";

	int choice;
	cin >> choice;

	if (choice == 1) {
		cout << "\n";
		CreateAccount();
		main();

	}


	return 0;
}


//TO-DO:
