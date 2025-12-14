#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
const int size = 10;
float passingmarks[size], failingmarks[size];
int passCount = 0, failCount = 0;
float mark;
for (int i = 0; i < size; i++) {
cout << "Enter the marks of Student " << i + 1 << " = ";
 cin >> mark;
 if (mark >= 5 && mark <= 10) {
passingmarks[passCount++] = mark;
} else if (mark >= 0 && mark < 5) {
failingmarks[failCount++] = mark;
 } else {
 cout << "Invalid marks. Enter between 0–10 only." << endl;
 i--; 
}
 }
cout << fixed << setprecision(2);
cout << "\nArray 1 values are = || ";
float passSum = 0;
for (int i = 0; i < passCount; i++) {
cout << passingmarks[i] << " || ";
passSum += passingmarks[i];
}
cout << endl;
cout << "\nArray 2 values are = || ";
float failSum = 0;
for (int i = 0; i < failCount; i++) {
 cout << failingmarks[i] << " || ";
 failSum += failingmarks[i];
 }
cout << endl;
if (passCount > 0)
cout << "\nAverage of Array 1 is = " << passSum / passCount << endl;
else
cout << "\nAverage of Array 1 is = " << endl;
if (failCount > 0)
cout << "Average of Array 2 is = " << failSum / failCount << endl;
else
cout << "Average of Array 2 is = " << endl;
cout << "\nPass = " << passCount << endl;
cout << "Fail = " << failCount << endl;
}

