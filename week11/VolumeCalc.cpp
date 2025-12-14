#include<iostream>
using namespace std;
 void volumeCalc(int a,int h){
    double volume=(a*a)*(1.0/3)*h;
    cout<<"Output: Volume = "<<volume;
}
 void getData(){
    int a,h;
 cout<<"Enter the value of a:";
 cin>>a;
 cout<<"Enter the value of h:";
 cin>>h;
 cout<<"Input: a="<<a<<" , h="<<h<<endl;
 volumeCalc(a,h);
}

int main(){
    getData();
}