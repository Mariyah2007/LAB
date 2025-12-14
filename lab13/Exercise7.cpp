#include <iostream>
#include <string>
using namespace std;
struct course {
    string name;
    double gpa;
};
struct Address {
    string street;
    string city;
    string state;
    int zip;
};
struct Student {
    string name;
    double cgpa;
    course courses[3]; 
    Address addr;
};

int main() {
Student s[2]; 
for (int k = 0; k < 2; k++) {
cout << "Enter details for Student " << k+1 << ":\n";
cout << "Name: ";
cin >> s[k].name;
double sumofgpa=0;
for (int i = 0; i < 3; i++) {
cout << "Enter course " << i+1 << " name: ";
cin >> s[k].courses[i].name;
cout << "Enter GPA for " << s[k].courses[i].name << ": ";
cin >> s[k].courses[i].gpa;
sumofgpa += s[k].courses[i].gpa;
}
s[k].cgpa = sumofgpa/ 3;
cout << "Enter street: ";
cin.ignore();
getline(cin, s[k].addr.street);
cout << "Enter city: ";
getline(cin, s[k].addr.city);
cout << "Enter state: ";
getline(cin, s[k].addr.state);
cout << "Enter zip: ";
cin >> s[k].addr.zip;
cout <<endl;
    }
cout << "Course GPA Comparison between both the students:\n";
for (int i = 0; i < 3; i++) {
if (s[0].courses[i].gpa > s[1].courses[i].gpa)
cout << s[0].name << " has higher GPA in " << s[0].courses[i].name << endl;
else if (s[0].courses[i].gpa < s[1].courses[i].gpa)
cout << s[1].name << " has higher GPA in " << s[0].courses[i].name << endl;
else
cout << "Both the students have equal GPA in " << s[0].courses[i].name << endl;
    }
cout << "Overall CGPA Comparison between both the students:"<<endl;
 if (s[0].cgpa > s[1].cgpa)
cout << s[0].name << " has higher CGPA"<<endl;
else if (s[0].cgpa < s[1].cgpa)
cout << s[1].name << " has higher CGPA"<<endl;
else
cout << "Both the students have equal cgpa";
}
