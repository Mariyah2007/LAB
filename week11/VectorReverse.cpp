
#include <iostream>
#include <vector>
using namespace std;
void printReverse(vector<int>& vec) {
    int n, value;
    cout << "Enter the number of elements: ";
    cin >> n;
   cout<<"Input:"<<endl;
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        vec.push_back(value);
    }
    cout<<endl;
    cout<<"Output:"<<endl;
    cout << "Reversed Order: ";
    for (int i = vec.size() - 1; i >= 0; --i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers;
    printReverse(numbers); 
}
