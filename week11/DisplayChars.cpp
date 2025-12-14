#include<iostream>
using namespace std;
 void DisplayChars(int time,char character){
  cout<<"Output: " ;
  for(int i=0;i<time;i++){
    cout<<character;
  }
 }
int main(){
int time;
cout<<"Enter the times the character need to be displayed:";
cin>>time;
char character;
cout<<"Enter the character need to be displayed:";
cin>>character;
cout<<"Input : "<<time<<" "<<character<<endl;
 DisplayChars(time,character);
}