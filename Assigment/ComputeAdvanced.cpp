#include<iostream>
using namespace std;
int main(){
int x;
int y;
cout<<"Enter first number:";
cin>>x;
cout<<"Enter second number:";
cin>>y;
int sum=x+y;
int prod=x*y;
if (sum%prod==0){
    cout<<"Divisible";
}
else{
        cout<<"Not Divisible";
    }
}
