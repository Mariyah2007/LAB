#include <iostream>
using namespace std;
void longestRun(int arr[], int n, int &value, int &length) {
    if (n == 0) {
        value = 0;
        length = 0;
        return;
    }

    value = arr[0];
    length = 1;

    int currentvalue = arr[0];
    int currentlength = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == currentvalue) {
            currentlength++;
        } else {
            currentvalue = arr[i];
            currentlength = 1;
        }

        if (currentlength > length) {
            length = currentlength;
            value = currentvalue;
        }
    }
}

int main() {
   int arr[1000]; 
    int n = 0;
    int x;
    cout << "Input: ";
    while (true){
        if(n==-1)break;
        cin>>n;
    }
    int value, length;
    longestRun(arr, n, value, length);

    cout << "Output: Longest run: " << length << "   consecutive " << value<<"s."<<endl;
    
}
