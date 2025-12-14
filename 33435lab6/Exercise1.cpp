#include <iostream>
using namespace std;
int main() {
    const int size = 10;
    int numbers[size];
    int searchnum, count = 0;
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << "Enter a number to find its count: ";
    cin >> searchnum;
    for (int i = 0; i < size; i++) {
        if (numbers[i] == searchnum) {
            count++;
        }
    }
    if (count > 0) {
        cout << "The number " << searchnum << " occurred " << count << " times in the array." << endl;
    } else {
        cout << "The number was not found in the array" << endl;
    }

   
}

