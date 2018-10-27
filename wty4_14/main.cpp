#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::ios;
#include <iomanip>
using std::setprecision;
using std::setiosflags;
 int main()
 {
 int accountNumber;
 double balance, charges, credits, limit;
 cout << "Enter account number (-1 to end): "
 << setiosflags(ios::fixed | ios::showpoint);
 cin >> accountNumber;
 while ( accountNumber != -1 ) {
 cout << "Enter beginning balance: ";
 cin >> balance;
 cout << "Enter total charges: ";
 cin >> charges;
 cout << "Enter total credits: ";
 cin >> credits;
 cout << "Enter credit limit: ";
 cin >> limit;
 balance += charges - credits;
 if ( balance > limit )
 cout << "Account: " << accountNumber
 << "\nCredit limit: " << setprecision( 2 ) << limit
 << "\nBalance: " << setprecision( 2 ) << balance
 << "\nCredit Limit Exceeded.\n";
 cout << "\nEnter account number (-1 to end): ";
 cin >> accountNumber;
 }
 cout << endl; // ensure all output is displayed
 return 0;
 }
