#include <iostream>
using namespace std;

int main() {
    double fscMarks, ntsMarks;
    double fscPercent, ntsPercent;

    
    cout << "Enter your fsc marks (out of 1100): ";
    cin >> fscMarks;
    cout << "Enter your nts marks (out of 100): ";
    cin >> ntsMarks;

    
    fscPercent = (fscMarks / 1100.0) * 100;
    ntsPercent = (ntsMarks / 100.0) * 100;

    cout << "Your fsc % = " << fscPercent << "%" << endl;
    cout << "Your nts % = " << ntsPercent << "%" << endl;

    
    if (fscPercent > 70 && ntsPercent > 70) {
        cout << "You are allocated to Oxford University to IT Department" << endl;
    }
    else if (fscPercent > 70 && ntsPercent > 60) {
        cout << "You are allocated to Oxford University to Electronics Department" << endl;
    }
    else if (fscPercent > 70 && ntsPercent > 50) {
        cout << "You are allocated to Oxford University to Telecommunication Department" << endl;
    }

   
    else if (fscPercent <= 70 && fscPercent >= 60 && ntsPercent >= 50) {
        cout << "You are allocated to MIT to IT Department" << endl;
    }
    else if (fscPercent < 60 && fscPercent >= 50 && ntsPercent >= 50) {
        cout << "You are allocated to MIT to Chemical Department" << endl;
    }
    else if (fscPercent < 50 && fscPercent >= 40 && ntsPercent >= 50) {
        cout << "You are allocated to MIT to Computer Department" << endl;
    }

    
    else {
        cout << "Sorry you do not meet the criteria for admission." << endl;
    }

    
}

