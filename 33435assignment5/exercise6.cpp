#include <iostream>
using namespace std;
int main() {
    const int students = 10;           
    double cse141, cse141Lab, cse578;  
    double sum141 = 0.0, sum141Lab = 0.0, sum578 = 0.0; 
    cout << "Enter grades of " << students 
         << " students for CSE141, CSE141-Lab, and CSE578:"<<endl;
    for (int i = 1; i <= students; i++) {
        cout << "Student " << i << " (CSE141 CSE141-Lab CSE578): ";
        cin >> cse141 >> cse141Lab >> cse578;
        sum141  =sum141+ cse141;
        sum141Lab =sum141Lab+cse141Lab;
        sum578 =sum578+cse578;
    }
    double avg141     = sum141 / students;
    double avg141Lab  = sum141Lab / students;
    double avg578     = sum578 / students;  
    double overallaverage = (sum141 + sum141Lab + sum578) / (students * 3.0);
    cout <<endl<< " Averages "<<endl;
    cout << "CSE141 Average:" << avg141 << endl;
    cout << "CSE141-Lab Average:" << avg141Lab << endl;
    cout << "CSE578 Average:" << avg578 << endl;
    cout << "Overall Average:" << overallaverage << endl;
    return 0;
}


