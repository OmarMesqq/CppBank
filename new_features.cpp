//EXPERIMENTAL CODE

void Loan() {  
  std::cout << "How much are you willing to borrow?";
  std::cout << "1 - < 500";  
  std::cout << "2 - > 500"; 
  std::cout << "3 - > 1000"; 
  long double YouOwe = x; //how much the user owes the bank

  unsigned int Borrow;  //how much is the user willing to borrow
  cin >> Borrow;

  switch (Borrow) {  //generate interest rates through a switch statement
    case 1:
    std::cout << "Interest rate is:\n";
    std::cout << "5 dollars per offline day"
    for (DaysOffline()) {
      YouOwe = x;
    }
    break;
    case 2:
    std::cout << "Interest rate is:\n";
    std::cout << "2 dollars + 5 per offline day"
    for (DaysOffline()) {
      YouOwe = 5*x + 2;
    }
    break;
    case 3:
    std::cout << "Interest rate is:\n";
    std::cout << "8 dollars + 10 per offline day";
    for (DaysOffline()) {
      YouOwe = 10*x + 8;
    }
    break;
    case default:
    std::cout << "Error" << std::endl;
  }

  std::cout << "Do you agree with the terms? (1- no/ 0 -yes)" << endl;
  bool Consent;
  if (Consent==true) {
    std::cout << "Operation successful!" << std::endl;
  }
  else {
    std::cout << "Operation failed!" << std::endl;
  }
}

int DaysOffline() {   // calculates how many days the user was offline. this function helps to generate interest rates
                     //  
  do {
    x = 0
  } while (IsOnline == true)

  if (IsOnline == false) {
  std::cout << "For how long have you been offline?" << std::endl;
  int x;
  cin >> x;
  return x;
 }
}



//TODO:

//create an algorithm to generate interest rates in an easier and more efficient way
