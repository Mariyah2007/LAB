#include <iostream>
#include <cstdlib>   
#include <ctime>   
using namespace std;

int main() {
    srand(time(0)); 
    int x, y, Sana;
    int correctCount = 0, wrongcount = 0;
    while (true) {   
        x = 1 + rand() % 10;
        y = 1 + rand() % 10;  
        int small, large;
if (x < y) {
    small = x;
    large = y;
} else {
    small = y;
    large = x;
}
     
        cin >> Sana;
        if (Sana == -1)
            break;
        int correctAnswer = small * large;
        if (Sana == correctAnswer) {
            cout << "Correct!" << endl;
            correctCount++;
        } else {
            cout << "Wrong! Answer = " << correctAnswer << endl;
            wrongcount++;
        }
    }
    cout << "\nFails = " << wrongcount << ", Pass = " << correctCount << endl;
    return 0;
}

