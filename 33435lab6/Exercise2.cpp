#include <iostream>
using namespace std;
int main() {
    const int size = 6;
    double numbers[size];
    double given[] = {3.14, 3.24, 3.34, 3.44, 3.54,3.64};
    for (int i = 0; i < 6; i++) {
        numbers[i] = given[i];
    }
    for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
    if (numbers[j] < numbers[j + 1]) {   
    double a = numbers[j];
    numbers[j] = numbers[j + 1];
    numbers[j + 1] = a;
            }
        }
    }
    cout << "Numbers in descending order:" << endl;
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}
