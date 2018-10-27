#include <iostream>
using std::cout;
using std::cin;
using std::ios;
#include <iomanip>
using std::setprecision;
using std::setiosflags;
int main()
{
 double sales, wage;
 cout << "Enter sales in dollars (-1 to end): "
 << setiosflags( ios::fixed | ios::showpoint );
 cin >> sales;
 while ( sales != -1.0 ) {
 wage = 200.0 + 0.09 * sales;
 cout << "Salary is: $" << setprecision( 2 ) << wage
 << "\n\nEnter sales in dollars (-1 to end): ";
 cin >> sales;
 }
 return 0;
}
