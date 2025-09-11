#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int x;
    int y;
    int z;
    cout << "Enter value of x:";
    cin >> x;
    cout << "Enter value of y:";
    cin >> y;
    cout << "Enter value of z:";
    cin>>z;
    double distance = sqrt(x * x + y * y + z * z);
cout << "The 3D Euclidean distance is "<< distance << endl;
}