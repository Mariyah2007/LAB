#include<iostream>
using namespace std;
int update(int &marks){
marks=marks+10;
return marks;
}
int main(){
    int marks;
    cout<<"Input:"<<endl;
    cout<<"Enter the marks :";
    cin>>marks;
    cout<<"Output:"<<endl;
   int result=update(marks);
    cout<<"Updated marks ="<<result;
}
