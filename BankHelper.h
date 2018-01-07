#ifndef BANK_HELPER_H 
#define BANK_HELPER_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

class BankAccount {   //aspects of the bank account
public:
	BankAccount() {
		Balance = 0.0;
	}
	~BankAccount() {
		std::cout << "It was an honor to have you in CppBank. Goodbye!\n\n" << std::endl;
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
	void CloseAccount() {
		delete ptr; //deletes pointer to created object, destroying it 
	}
	void setPassword(std::string x) {
		passwd = x;
	}
	BankAccount * ptr = this;
private:
	unsigned short AccNum;
	std::string passwd;
	std::string Name;
	long double Balance;
};

unsigned short AccGen() {
	srand(time(NULL));  //entropy seed : local time
	return 1 + (rand() % 99);    //returns value between 1 and 99 (range of the bank accounts IDs)
}

void CreateAccount() {
	BankAccount NewAccount; //creates the object "NewAccount" from class "BankAccount"
	BankAccount * ptr = &NewAccount; //assigns the pointer to the created object in case of account deletion

	std::cout << "Enter your name: ";   //sets name
	std::string x;
	std::cin >> x;
	NewAccount.setName(x);

	std::cout << "Set a password: ";  //sets password
	std::string pwd;
	std::cin >> pwd;
	std::cout << "Type in your password again: ";
	std::string chckPW;
	std::cin >> chckPW;
	if (chckPW == pwd) {
		ptr->setPassword(pwd);
	}
	else {
		std::cout << "Your passwords do not match" << std::endl;
		system("pause");
		exit(0);
	}


	std::cout << "Please write down your account number: " << AccGen() << std::endl;
	system("pause");

}

#endif // BANK_HELPER_H
