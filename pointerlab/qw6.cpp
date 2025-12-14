#include <iostream>
using namespace std;
void SentenceCase(char *Text, int *size) {
bool newsentence = true;
for (int i = 0; i < *size; i++) {
 char ch = *(Text + i);
 if (ch >= 'a' && ch <= 'z') {
 if (newsentence) {
  *(Text + i) = ch - 32;
   newsentence = false;
   }
    }
   else if (ch >= 'A' && ch <= 'Z') {
    if (!newsentence) {
     *(Text + i) = ch + 32;
    } else {
   newsentence = false;
     }
   }
  else if (ch == '.') {
  newsentence = true;
   }
}
}
int main() {
char temp[200];
cout << "Enter text: ";
cin.getline(temp, 200);
int number = 0;
while (temp[number] != '\0') number++; 
char *arr = new char[number + 1];
for (int i = 0; i <= number; i++) arr[i] = temp[i];
SentenceCase(arr, &number);
cout << "Sentence Case: " << arr << endl;
delete[] arr;
}
