#ifndef BANK_HELPER_H 
#define BANK_HELPER_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

class BankAccount {   //aspects of the bank account
BankAccount() : Balance(0.0) {}
~BankAccount() {
  std::cout << "It was an honor to have you in CppBank. Goodbye!\n\n" << std::endl;
}
public:
  void Deposit();
  void Withdraw();
  void setName();
  void CloseAccount()
  BankAccount * ptr = this;
private:
  const unsigned short AccNum;
  string passwd;
  const string Name;
  long double Balance;
  friend void setPassword();
};

void CreateAccount() {
  BankAccount NewAccount; //creates the object "NewAccount" from class "BankAccount"
  ptr = &NewAccount; //assigns the pointer to the created object in case of account deletion

  std::cout << "Enter your name:\n" << std::endl;   //sets name
  string x;
  std::cin >> x;
  BankAccount.setName(x); 

  std::cout << "Set a password:\n" << std::endl;  //sets password
  string pwd;
  ptr->setPassword(pwd); //same as using BankAccount.setPassword (pwd)

  std::cout << "Please write down your account number:\n" << std::endl;  //sets account number
  std::cout << AccGen() << std::cout;

}
 

short AccGen() {
  srand(time(NULL));  //entropy seed : local time
  return 1 + (rand() % 99);    //returns value between 1 and 99 (range of the bank accounts IDs)
}

void Deposit(double AmmIn) {
  std::cout << "How much are you willing to deposit?" << std::endl;
  std::cin >> AmmIn;
  std::cout << "Operation successful!" << std::endl;
  Balance += AmmIn

}

void Withdraw(double AmmOut) {
  std::cout << "How much are you willing to withdraw?" << std::endl;
  std::cin >> AmmOut;

  if (AmmOut > Balance ) {
    std::cout << "You do not have this much money" << std::endl;
  }
  else {
    std::cout << "Operation successful!" << std::endl;
    Balance -= AmmOut;
  }
}

void setName(string x) {
  Name = x;
}

void setPassword(string x) {
  passwd = x;
}

void CloseAccount() {
  delete ptr;  //deletes pointer to created object, destroying it
}



#endif // BANK_HELPER_H


