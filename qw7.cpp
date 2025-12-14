#include<iostream>
using namespace std;
int main(){
    float n;
    cout<<"enter the number";
    cin>>n;
 if(n<5.0){
        cout<<"little or no damage"; }
   else if(n>=5.0 && n<5.5){
   cout<<"Serious damage:walls may crack or fall";

    }
    else if(n>=5.5 && n<6.5){
    cout<<"Serious damage:walls may crack or fall";
     
    }
    else if(n>=6.5 && n<7.5){
        cout<<"Disaster:House and Buildings may collapse";
    }
    else {
        cout<<"Catastrophe:most buildings destroyed";
    }
}