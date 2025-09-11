#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    cout << "Enter x: ";
    cin >> x ;
    cout<<"Enter y:";
    cin>>y;
    
    if (x > 0) 
    {
        if (y > 0) {
            cout << "The point  is in 1st quadrant" << endl;
        } else if (y < 0) {
            cout << "The point  is in 4th quadrant" << endl;
        } 
    }
    
    else if (x < 0) 
    {
        if (y > 0) {
            cout << "The point is in 2nd quadrant" << endl;
        } else if (y < 0) {
            cout << "The point  is in 3rd quadrant" << endl;
        } 
    }
}

