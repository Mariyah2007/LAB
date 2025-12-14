#include <iostream>
#include <cmath>
using namespace std;

int isDivisibleBy7(int a) {
    while (abs(a) >= 10) { 
        int lastdigit = a % 10;     
        int rest = a / 10;      
        a= rest - 2 * lastdigit;   
        }
    return (a == 0 || a == 7 || a== -7);
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (isDivisibleBy7(a))
        cout << a << " is divisible by 7"; 
    else
        cout << a << " is not divisible by 7";

    
}
