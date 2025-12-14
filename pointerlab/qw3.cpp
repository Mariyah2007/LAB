#include <iostream>
using namespace std;

float* findMax(float* array, int n) {
float* max1 = array;      
float* max2 = nullptr;    
for (int i = 1; i < n; i++) {
if (*(array + i) > *max1) {
 max2 = max1;
 max1 = array + i;
}
else if (max2 == nullptr || (*(array + i) > *max2 && *(array + i) != *max1)) {
  max2 = array + i;
  }
 }
    return max2;
}
int main() {
float arr[] = {4.5, 3.3, 0.5, 4.57};
float* result = findMax(arr, 4);
cout << "Second highest = " << *result;
}
