#include <iostream>
using namespace std;
int main() {
    const int SIZE = 5;
    int array1[SIZE], array2[SIZE];
    cout << "Array 1:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter the marks of Student " << i + 1 << " = ";
        cin >> array1[i];
    }
    cout << "\nArray 2:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter the marks of Student " << i + 6 << " = ";
        cin >> array2[i];
    }
    cout << "\nCommon values are:\n";
    for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
    if (array1[i] == array2[j]) {
    bool alreadyPrinted = false;
    for (int k = 0; k < i; k++) {
    if (array1[k] == array1[i]) {
    alreadyPrinted = true;
    break;
    }
    }
    if (!alreadyPrinted) {
    cout << "               " << array1[i] << endl;  
    }
    break;
    }
    }
    }

    return 0;
    }
   
