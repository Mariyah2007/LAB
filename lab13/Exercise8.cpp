#include <iostream>
#include <string>
using namespace std;
struct student {
    string name;
    int age;
    string rollno;
    double cgpa;
};
int main() {
int N;
cout << "Enter number of students:";
cin >> N;
student* students = new student[N]; 
for (int i = 0; i < N; i++) {
cout <<endl<<"Enter details for student " << i + 1 <<endl;
cout << "Name: ";
cin >> students[i].name;
cout << "Age: ";
cin >> students[i].age;
cout << "Roll Number: ";
cin >> students[i].rollno;
cout << "CGPA: ";
cin >> students[i].cgpa;
    }
cout <<endl<< "student Records:"<<endl;
for (int i = 0; i < N; i++) {
cout << "student " << i + 1 << endl;
cout << "Name: " << students[i].name << endl;
cout << "Age: " << students[i].age << endl;
cout << "Roll Number: " << students[i].rollno << endl;
cout << "CGPA: " << students[i].cgpa << endl;
cout<<endl;
    }
delete[] students; 
}
