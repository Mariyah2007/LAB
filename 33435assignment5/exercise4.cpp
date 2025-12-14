#include <iostream>
using namespace std;

int main() {
    int num;
    int negativenumber = 0, positivenumber = 0, rangeCount = 0;

    do {
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0)
            negativenumber++;
        else if (num > 0)
            positivenumber++;

        
        if (num >= 100 && num <= 200)
            rangeCount++;

        if (num % 2 != 0)
            cout << "Square of " << num << " is " << (num * num) << endl;

    } while (!(num >= 15 && num <= 25)); 

    cout << "Negative numbers given: " << negativenumber << endl;
    cout << "Positive numbers given: " << positivenumber << endl;
    cout << "Total Count of[100-200] " << rangeCount << endl;

    return 0;
}
