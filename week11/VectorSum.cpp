#include <iostream>
#include <vector>
using namespace std;
int vectorSum(const vector<int>& numbers) {
    int sum = 0;
    for (int number : numbers) {
        sum += number;
    }
    return sum;
}
void inputandsum() {
    int count;
    cout<<"Input:"<<endl;
    cout << "Enter count: ";
    cin >> count;
    vector<int> numbers(count);
    cout << "Enter numbers: ";
    for (int i = 0; i < count; ++i) {
        cin >> numbers[i];
    }
    int sum = vectorSum(numbers);
    cout<<"Output:"<<endl;
    cout << "Sum = " << sum << endl;
}

int main() {
    inputandsum();
}

