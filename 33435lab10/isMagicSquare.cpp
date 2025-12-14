#include<iostream>
using namespace std;
bool magicsquare(int a[10][10],int row,int column){
    if (row != column) return false;
    int sumd1=0;
    int sumd2=0;
    int row1=0;
     for (int j = 0; j <column; j++) {
        row1+= a[0][j];  
    }
    for(int i=0;i<row;i++){
    int sumofrow=0;  
    for(int j=0;j<column;j++){
    sumofrow=sumofrow+a[i][j];}
     if (row1 != sumofrow) return false;
    
    }
   
    for(int j=0;j<column;j++){
   int sumofcolumn=0;  
    for(int i=0;i<row;i++){
    sumofcolumn=sumofcolumn+a[i][j];}
    if (sumofcolumn != row1) return false;
}
    
     for (int i = 0; i <row; i++) {
        sumd1+= a[i][i];
    }
    for( int i=0;i<row;i++){
        sumd2+=a[i][row-1-i];
    }
   return sumd1==row1 && sumd2== row1;
}
int main() {
int row;
int column;
cin>>row;
cin>>column;
cout<<"Matrix:"<<endl;
int a[10][10];
for(int i=0;i<row;i++){
for(int j=0;j<column;j++){
cin>>a[i][j];}
    }
   if (magicsquare(a,row,column))
        cout << "Output: True" << endl;
    else
        cout << "Output: False" << endl;

    return 0;
}



