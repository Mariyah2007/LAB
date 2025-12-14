#include <iostream>
using namespace std;

int main() {
    char Typeofcoffe;
    bool isdouble, ismanual;
    double totalTime = 0;

    cout << "Enter coffee type (b for Black, w for White): ";
    cin >> Typeofcoffe;

   


    if (Typeofcoffe == 'W' || Typeofcoffe == 'w') {
        cout << "Preparing White Coffee...\n";
        cout << "Step 1: Put WaterIn A Kettle (15 min)\n"; totalTime += 15;
        cout << "Step 2: Add Some Sugar In It (15 min)\n"; totalTime += 15;
        cout << "Step 3: Mix It Well Throughly (20 min)\n"; totalTime += 20;
        cout << "Step 4: Now Add Coffee Powder/Beans (2 min)\n"; totalTime += 2;
        cout << "Step 5: Add Milk To It (4 min)\n"; totalTime += 4;
        cout << "Step 6: Mix It Again (20 min)\n"; totalTime += 20;
    }
    else if (Typeofcoffe == 'B' || Typeofcoffe == 'b') {
        cout << "Preparing Black Coffee...\n";
        cout << "Step 1: Put WaterIn A Kettle (20 min)\n"; totalTime += 20;
        cout << "Step 2: Add Some Sugar In It (20 min)\n"; totalTime += 20;
        cout << "Step 3: Mix It Well Throughly (25 min)\n"; totalTime += 25;
        cout << "Step 4: Now Add Coffee Powder/Beans (15 min)\n"; totalTime += 15;
        cout << "Step 5: Mix It Again (25 min)\n"; totalTime += 25;
    }
    else {
        cout << "The Type Of Coffee Is Not Available\n";
        return 0;
        
    }
     cout << "Is cup size double? (1 = true, 0 = false): ";
    cin >> isdouble;

    if (isdouble) {
        cout << "Cup size is double hence time is increasing by 50%\n";
        totalTime = totalTime * 1.5;
    }

    cout << "Is coffee manual? (1 = true, 0 = false): ";
    cin >> ismanual;
    if (ismanual) {
        cout << "The Coffee Is Prepared Manually.\n";
    }

    cout << "Total time to prepare the coffee is: " << totalTime << " minutes\n";

}
