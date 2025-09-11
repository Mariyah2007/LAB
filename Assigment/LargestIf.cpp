#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << "Enter first integer: ";
    cin>>a;
    cout << "Enter second integer: ";
    cin>>b;
    cout<< "Enter third integer: ";
    cin >>c;
    int largest;
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    cout << "Largest integer is: " <<endl<<largest;
}
