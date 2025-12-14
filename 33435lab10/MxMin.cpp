#include<iostream>
#include<climits>
using namespace std;
void findmax(){
    int n;
    int max=INT_MIN;
    int min=INT_MAX;
    cout<<"Enter 0 to exit"<<endl;
    cout<<"Input:";
    while(true){
        cin>>n;
        if(n==0) break;
     
    if(n>max){
        max=n;
    }
    if(n<min){
        min=n;
    }}
    cout<<"Output: Max="<<max<<",  "<<"Min ="<<min;
    




}
int main(){
  findmax() ;
  return 0;
}
  