#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    double num = (double)rand() / RAND_MAX;
    double sum = num, min = num, max = num;

    cout << "Generated numbers: " << num << " ";

    for (int i = 1; i < 5; i++) {
        num = (double)rand() / RAND_MAX;
        cout << num << " ";
        sum = sum + num;
        if (num < min) min = num;
        if (num > max) max = num;
    }

    cout << endl;
    cout << "Average = " << sum / 5 << endl;
    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;
}
