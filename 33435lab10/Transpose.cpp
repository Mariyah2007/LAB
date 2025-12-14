#include<iostream>
using namespace std;
void transpose(){
  int b[3][4];
  int a[4][3]={{9,5,7},{1,3,6},{5,4,1},{0,8,2}};
  for(int i=0;i<4;i++){
  for(int j=0;j<3;j++){
    b[j][i]=a[i][j];}}
    cout<<"Output transpose (3x4) :"<<endl;
    for(int i=0;i<3;i++){
      for(int j=0;j<4;j++){
        cout<<b[i][j]<<" ";
      }
      cout<<endl;
    }
    
  
  }
   
int main(){
  transpose();}

