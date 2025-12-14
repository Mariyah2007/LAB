    #include <iostream>
    using namespace std;
    int main() {
    long long number;
    cout << "Enter the number = ";
    cin >> number;
    long long a = number;
    int DigitCount = 0;
    while (a > 0) {
        a /= 10;
        DigitCount++;
    }
    cout << "Total number of digits: " << DigitCount << endl;
    int DigitalRoot = 0;
    while (number > 9) { 
        int sum = 0;
     while (number > 0) {
            sum += number % 10;
            number /= 10;
        }
        number = sum; 
    }
    DigitalRoot = number;
    cout << "Digital root of number: " << DigitalRoot << endl;
    return 0;
}

