#include <iostream>
using namespace std;

int main() {
    double calories, fatgrams;

    
    cout << "Enter total calories: ";
    cin >> calories;
    cout << "Enter fat grams: ";
    cin >> fatgrams;

    if (calories < 0 || fatgrams < 0) {
        cout << " Calories and fat grams cannot be less than 0" << endl;
        return 0;
    }

    double caloriesfromfat = fatgrams * 9;

    if (caloriesfromfat > calories) {
        cout << " Calories from fat cannot be greater than total calories." << endl;
       return 0;
    }

    double percentagefromFat = (caloriesfromfat / calories) * 100;
    cout << "Calories from fat: " << caloriesfromfat << endl;
    cout << "Percentage of calories from fat: " << percentagefromFat << "%" << endl;

    if (percentagefromFat < 30)
        cout << "This food is low in fat." << endl;

}
   