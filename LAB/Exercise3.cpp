#include <iostream>
using namespace std;
void returnfunction(float *number) {
cout << "Output:" << endl;
cout << "Value = " << *number << endl;
cout << "Address = " << number << endl;  
cout << "Updated Value = " << *number + 10 << endl;
}

int main() {
float *number = new float;  
cout << "Enter the number: ";
cin >> *number;
returnfunction(number);
delete number;  
return 0;
}
