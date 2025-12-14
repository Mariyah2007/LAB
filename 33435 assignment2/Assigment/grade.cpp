#include <iostream>
using namespace std;

int main() {
    float s1, s2, s3, s4, s5;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    cin>>s4;
    cin>>s5;
    float avg = (s1 + s2 + s3 + s4 + s5) / 5.0;

    if (avg >= 90) {
        cout << "Grade is A";
    } else if (avg >=80 && avg<=89) {
        cout << "Grade is B";
    } else if (avg >= 70 && avg<=79) {
        cout << "Grade is C";
    } else {
        cout << "Fail";
    }
}
