#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;   

    
    if (a + b > c && a + c > b && b + c > a) { 
        cout << "It is a triangle"<<endl;

        if (a == b && b == c) {
            cout << "Triangle is Equilateral";
        } 
        else if (a == b || b == c || a == c) {
            cout << "Triangle is Isosceles";
        } 
        else {
            cout << "Triangle is Scalene"; 
        }
    } 
    else {
        cout << "Not a valid triangle";
    }

    
}
