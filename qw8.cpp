#include <iostream>
using namespace std;

int main() {
int numoftypes, quantity, total = 0;
char choice;
cout << "Enter number of food types: ";
cin >> numoftypes;
for (int i = 1; i <= numoftypes; i++) {
cout << "Enter choice (B/F/P/S): ";
cin >> choice;
cout << "Enter the quantity: ";
cin >> quantity;
if (choice == 'B' || choice == 'b') {
total = (total+ 200) * quantity;
} else if
  (choice == 'F' || choice == 'f') {
total =(total + 50) * quantity; 
 }  else if 
 (choice == 'P' || choice == 'p') {
total =(total+ 500 )* quantity;
 }  else if 
 (choice == 'S' || choice == 's') {
 total += 150 * quantity;
 } else{
    
cout << "the choice is not valid" << endl;                 
}
}         


cout << "Total charges: Rs. " << total << endl;  
}
