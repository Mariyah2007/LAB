#include <iostream>
#include <ctime>   
#include <cstdlib> 
using namespace std;

int main() {
    const int size = 6;
    double a[size];
    srand(time(0));
    for (int i = 0; i <size; i++) {
        double n = (double) rand() / RAND_MAX;  
        a[i] = n;
    }
    double sum = 0;
    for (int i = 0; i <size; i++) {
        cout <<" Array elements are:"<<a[i] <<endl;
        sum += a[i];
    }
    cout << endl;
    double avg = sum /size;
    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << avg << endl;

    return 0;
}
