#include <iostream>
using namespace std;
float *sumofarray(float* array, int n) {
float *sum = new float;
*sum=0;
for (int i = 0; i < n; i++) {
*sum += *(array + i); 
    }
return sum;
}
int main() {
float array[4] = {4.5, 3.3, 0.5, 4.57};
float *result=sumofarray(array,4);
cout<<"Output:"<<*result;
delete result;
}
//my own notes:-as we are giving address we need a pointer to hold it on and to acces the values in the function we need to put* and plus i so it will keeep moving forward
//it sends the array of the first elemet and decays to a pointer the addresss gets passed on