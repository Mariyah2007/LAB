#include <iostream>
using namespace std;
struct Complex {
    double real;
    double imaginary;
};
int main() {
Complex no1, no2;
cout << "Enter first complex number:\n";
cout << "Real part: ";
cin >> no1.real;
cout << "Imaginary part: ";
cin >> no1.imaginary;
cout << "Enter second complex number:\n";
cout << "Real part: ";
cin >> no2.real;
cout << "Imaginary part: ";
cin >> no2.imaginary;
Complex sum;
sum.real = no1.real + no2.real;
sum.imaginary = no1.imaginary + no2.imaginary;
Complex prod;
prod.real = no1.real*no2.real - no1.imaginary*no2.imaginary;
prod.imaginary = no1.real*no2.imaginary + no1.imaginary*no2.real;
cout <<endl<< "Sum: " << sum.real;
if(sum.imaginary >= 0) cout << " + " << sum.imaginary << "i\n";
else cout << " - " << -sum.imaginary << "i\n";
cout << "Product: " << prod.real;
if(prod.imaginary >= 0) cout << " + " << prod.imaginary << "i \n";
else cout << " - " << -prod.imaginary << "i \n";
}
