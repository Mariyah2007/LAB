#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
cout << "3a + 7b - 5c = 10"<<endl<<endl;  
cout << "The integer roots for given problem are:\n";
for (int a = -10; a <= 10; a++) {
for (int b = -10; b <= 10; b++) {
for (int c = -10; c <= 10; c++) {
if (3 * a + 7 * b - 5 * c == 10) {
cout << "Solution:    "
 << "a = " << setw(3) << a 
 << "   b = " << setw(3) << b 
 << "   c = " << setw(3) << c 
 << endl;
 }
 }
 }
 }
}

