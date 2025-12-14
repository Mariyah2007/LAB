#include<iostream>
using namespace std;
void matrixadd() {
    int sum[3][4];
    cout<<"Output:"<<endl;
 int a[3][4]={{2,5,7,1},{1,3,6,1},{5,4,1,3}};
 int b[3] [4]={{1,9,5,0},{7,1,5,4},{3,4,2,8}};
 for(int i=0;i<3;i++){
 for(int j=0;j<4;j++){
    sum[i][j]=a[i][j]+b[i][j];}
 }
  for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    
 }

int main(){
    matrixadd();
}

