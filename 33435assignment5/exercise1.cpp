#include<iostream> 
using namespace std;
int main(){
    int firstnumber;
    cout<<"Enter the first number";
    cin>>firstnumber;
    int secondnumber;
    cout<<"Enter second number";
    cin>>secondnumber;
    while(firstnumber!=secondnumber){
        firstnumber=firstnumber>>2;
        secondnumber=secondnumber*secondnumber;
        cout<<"firstnumber:"<<firstnumber<<endl;
        cout<<"secondnumber:"<<secondnumber<<endl;
        cout<<"*****************"<<endl;
    if (firstnumber==0)
    {
        cout<<"Numbers didnt become equal";
        break;
    }

} 
return 0;
}