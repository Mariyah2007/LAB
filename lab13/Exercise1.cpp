#include <iostream>
using namespace std;
int a[10][10], b[10][10], c[10][10];
int r1, c1, r2, c2;
void multiplybyrecurssion(int i, int j, int k) {
 if (i == r1)
return;
if (k < c1) {
c[i][j] += a[i][k] * b[k][j];
multiplybyrecurssion(i, j, k + 1);   
}
else {
if (j + 1 < c2)
multiplybyrecurssion(i, j + 1, 0);
        else
multiplybyrecurssion(i + 1, 0, 0); 
    }
}
int main() {
cout << "Enter rows and columns of Matrix a: ";
cin >> r1 >> c1;
cout << "Enter rows and columns of Matrix b: ";
cin >> r2 >> c2;
if (c1 != r2) {
cout << "Multiplication cannot be done";
return 0;
}
cout << "Enter Matrix a:\n";
for (int i = 0; i < r1; i++)
for (int j = 0; j < c1; j++)
cin >> a[i][j];
cout << "Enter Matrix b:\n";
for (int i = 0; i < r2; i++)
for (int j = 0; j < c2; j++)
cin >> b[i][j];
for (int i = 0; i < r1; i++)
for (int j = 0; j < c2; j++)
c[i][j] = 0;
multiplybyrecurssion(0, 0, 0);
cout << "\nResult Matrix:\n";
for (int i = 0; i < r1; i++) {
for (int j = 0; j < c2; j++)
cout << c[i][j] << " ";
cout << endl;
}
}
