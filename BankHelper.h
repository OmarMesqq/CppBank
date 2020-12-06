#ifndef BANK_HELPER_H 
#define BANK_HELPER_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>

unsigned short AccGen() {
	srand(time(NULL));  //entropy seed : local time

	return 1 + (rand() % 99);    //returns value between 1 and 99 (range of the bank accounts IDs)
}

class BankAccount {   //aspects of the bank account

public:

	BankAccount() {
		Balance = 0.0;
	}

	void Deposit(double AmmIn) {
		std::cout << "How much are you willing to deposit?" << std::endl;
		std::cin >> AmmIn;
		std::cout << "Operation successful!" << std::endl;
		Balance += AmmIn;

	}
	void Withdraw(double AmmOut) {
		std::cout << "How much are you willing to withdraw?" << std::endl;
		std::cin >> AmmOut;

		if (AmmOut > Balance) {
			std::cout << "You do not have this much money" << std::endl;
		}
		else {
			std::cout << "Operation successful!" << std::endl;
			Balance -= AmmOut;
		}
	}

	void setName(std::string x) {
		Name = x;
	}

	void setPassword(std::string x) {
		passwd = x;
	}
	void setAccNum() {
		AccNum = AccGen();
	}

	auto getName() {
		return Name;
	}

	auto getAccNum() {
		return AccNum;
	}

private:

	unsigned short AccNum;
	std::string passwd;
	std::string Name;
	long double Balance;
};

static void CreateAccount() {

	BankAccount NewAccount; //creates the object "NewAccount" from class "BankAccount"
	

	std::cout << "Enter your name: " << "\n";   //sets name
	std::string x;
	std::cin >> x;
	NewAccount.setName(x);

	std::cout << "Set a password: " << "\n";  //sets password
	std::string pwd;
	std::cin >> pwd;

	std::cout << "Type in your password again: " << "\n";
	std::string chckPW;
	std::cin >> chckPW;

	if (chckPW == pwd) {     //checks password
		NewAccount.setPassword(pwd);
		NewAccount.setAccNum();

		std::cout << "This is your PlusBank ID Number:\n\n";
		std::cout << "Keep it in a safe place\n\n";
;
		std::cout << NewAccount.getAccNum() << "\n\n";

	}

	else {
		std::cout << "Your passwords do not match! Please, try again.\n\n" << std::endl;
		CreateAccount();
	}

}

#endif // BANK_HELPER_H
