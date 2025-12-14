#include <iostream>
using namespace std;
void swapPointers(int* &a, int* &b) {
int* temp = a;
a = b;
b = temp;
}
int main() {
int a = 5;
int b = 10;
int* p1 = &a;
int* p2 = &b;
cout<<"Sample output"<<endl;
cout<<a<<"   "<<b<<endl;
cout << p1 << "->" << p2 << endl;
swapPointers(p1, p2);
cout << a ;
cout <<" "<<b<< endl;
cout << p1 << "->" << p2 << endl;
}
