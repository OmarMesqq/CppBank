#include <iostream>
#include <ctime>
#include <cstdlib>

#define TRUE = 0   //defining booleans
#define FALSE = 1

class BankAccount {   //aspects of the bank account
public:
  long double Balance;
  void Deposit();
  void Withdraw();
  char Name[256];
  bool IsOnline;
  BankAccount(){
    Balance = 0.0;
  };
  ~BankAccount();
private:
  unsigned short AccNum;
  char passwd[256];
};

void CreateAccount() {
  BankAccount NewAcc; //creates the object "NewAcc" from class "BankAccount"

  std::cout << "Enter your full name:\n";
  std::cin >> BankAccount::Name;

  std::cout << "Enter your password\n";
  std::cin >> BankAccount::passwd;

  std::cout << "Re-enter your password:\n";
  char checkPasswd[256];  //check if password is correct
  char * Bye[] = checkPasswd;  //pointer pointing to the array above for future use
  std::cin >> checkPasswd;

  if (checkPasswd==BankAccount::passwd) {
    std::cout << "|||||||||||||||||SUMMARY||||||||||||||||\n\n";
    std::cout << "Your name: " << BankAccount::Name << endl;
    std::cout << "Your password: " << BankAccount::passwd << endl;
    std::cout << "Your account number: " << AccGen() << endl;
    delete Bye;  // deletes the pointer, thus freeing space in the stack
  }
  else {
    std::cout << "Your passwords do not match" << endl;
  }
}

short AccGen() {
  srand(time(NULL));  //high entropy seed : local time
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


