#include <iostream>
using namespace std;
void SortFunction(int *array, int *size, int order) {
for (int i = 0; i < *size - 1; i++) {
for (int j = 0; j < *size - i - 1; j++) {
if ((order == 1 && *(array + j) > *(array + j + 1)) || 
(order == 2 && *(array + j) < *(array + j + 1))) {
int temp = *(array + j);
*(array + j) = *(array + j + 1);
*(array + j + 1) = temp;
 }
}
}
}
int main() {
 int size;
cout<<"Enter the size of the array:";
cin>>size;
int *array = new int[size];
cout << "Enter the array elements: ";
 for (int i = 0; i < size; i++) {
cin >> *(array + i); 
 }
int order;
cout << "Enter 1 for ascending or 2 for descending: ";
cin >> order;
SortFunction(array, &size, order);
cout << "Sorted array: ";
for (int i = 0; i < size; i++) {
cout << *(array + i) << " "; 
}
cout << endl;
delete[] array;
}
