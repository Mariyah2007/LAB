#include <iostream>
using namespace std;
int main() {
    const int SIZE = 6;
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter element a[" << i << "]= " << flush;
        cin >> arr[i];
    }
    bool isSymmetric=true;
    for(int i=0;i<=SIZE/2;i++){
        if(arr[i]!=arr[SIZE-1-i]){
            bool isSymmetric=false;
            break;

        }
    }

    cout << endl;
    if (isSymmetric) {
        cout << "Array is Symmetric" << endl;
    } else {
        cout << "Array is Non-Symmetric" << endl;
    }
}
