#include <iostream>
#include "Bank.h"

using namespace std; 

int main() {

Bank bankObj(100.0f);

cout << "Initial Balance: " << bankObj.getBalance() << endl;

bankObj.setBalance(-50.0f); 
cout << "Balance after setting -50: " << bankObj.getBalance() << endl;

bankObj.setBalance(150.0f);
cout << "Balance after setting 150: " << bankObj.getBalance() << endl;

return 0;
}