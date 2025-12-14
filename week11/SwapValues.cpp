#include<iostream>
using namespace std;
 void swapvalues(int &a,int &b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    cout<<"Input:"<<endl;
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Output:"<<endl;
    cout<<"Before swap: a="<<a<<", b="<<b<<endl;
    swapvalues(a,b);
    cout<<"After swap: a="<<a<<", b="<<b;
}