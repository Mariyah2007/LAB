#include<iostream>
using namespace std;
int factorialfunction(int n){
 if(n==0) return 1;
 return n*factorialfunction(n-1);
 }  

int main(){
int n;
cout<<"Enter the number:";
cin>>n;
if (n<0) n=-n;
int result=factorialfunction(n);
cout<<"The factorial is "<<result;}