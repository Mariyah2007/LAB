#include<iostream>
using namespace std;
double power(double a,int b){
    double result=1;
    if(b==0){
        result=1;
    }
    else if(b>0){
    for(int i=0;i<b;i++){
    result=result*a;
    }}
     else {                  
    int newb = -b;
        for (int i = 0; i < newb; i++) {
            result *= a;
        }
        result = 1.0/ result; 
    }
    return result;
}
int main(){
    double a;
    cout<<"Enter the base:";
    cin>>a;
    int b;
    cout<<"Enter the power:";
    cin>>b;
    cout<<"Input :"<<a<<" "<<b<<endl;
   double finalresult=power(a,b);
    cout<<"Output: "<<finalresult;
}