#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
vector<int> values;
for (int i = 1; i <= 8; i++) {
values.push_back(i);
values.push_back(i);
    }
random_shuffle(values.begin(), values.end());
vector<vector<int>> cards(4, vector<int>(4));
int index = 0;
for (int i = 0; i < 4; i++)
for (int j = 0; j < 4; j++)
cards[i][j] = values[index++];
 cout << "Card layout:\n";
for (int i = 0; i < 4; i++) {
 for (int j = 0; j < 4; j++)
 cout << cards[i][j] << " ";
cout << endl;
    }
cout << endl;
vector<vector<bool>> faceUp(4, vector<bool>(4, false));
int row1, column1, row2, column2;
int matchedPairs = 0;
cout << "Welcome to the Memory Matching Game!\n";
cout << "Select two cards by row and column from 0 to 3.\n";
while (matchedPairs < 8) {
  cout << "\nCurrent Board:\n";
  cout << "   0 1 2 3\n";
 for (int i = 0; i < 4; i++) {
cout << i << "  ";
for (int j = 0; j < 4; j++) {
if (faceUp[i][j])
cout << cards[i][j] << " ";
  else
   cout << "* ";
  }
            cout << endl;
        }
cout << "\nEnter first card position row and column: ";
cin >> row1 >> column1;
 while (row1 < 0 || row1 >= 4 || column1 < 0 || column1 >= 4 || faceUp[row1][column1]) {
cout << "Invalid or already matched. Try again: ";
cin >> row1 >> column1;
        }
cout << "Enter second card position row and column: ";
cin >> row2 >> column2;
while (row2 < 0 || row2 >= 4 || column2 < 0 || column2 >= 4 || faceUp[row2][column2] || (row1 == row2 && column1 == column2)) {
cout << "Invalid or same as first.Please try again: ";
 cin >> row2 >> column2;
 }
cout << "\nYou selected: (" << row1 << "," << column1 << ") = " << cards[row1][column1]
<< " and (" << row2 << "," << column2 << ") = " << cards[row2][column2] << endl;
if (cards[row1][column1] == cards[row2][column2]) {
cout << " Match found\n";
 faceUp[row1][column1] = faceUp[row2][column2] = true;
  matchedPairs++;
} else {
  cout << " Match not found\n";
  }
    }
cout << "\n  All pairs are matched\n";
return 0;
}
