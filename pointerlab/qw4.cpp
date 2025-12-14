#include <iostream>
#include <cctype>
using namespace std;
int WordCount(char *Text, int *size) {
bool inWord = false;
int count = 0;
for (char *p = Text; *p != '\0'; p++) {
if (isspace(*p)) {
inWord = false;
} else {
if (!inWord) {
  count++;
  inWord = true;
   }
        }
    }

   *size = count;   
  return count;    
}
int main() {
 char text[200];
cout << "Enter the text: ";
cin.getline(text, 200);
int size = 0;
int result = WordCount(text, &size);
cout << "The size is " << result;
}
