#include<iostream>
using namespace std;
bool palindromecheck(string s1,int i,int j){
if(i>j)return true; 
    if(s1[i]==s1[j]){
    return palindromecheck(s1,i+1,j-1);}
 if(s1[i]!=s1[j]){
    return false;
}}
int main(){
string s1;
cout<<"Enter the  string:";
cin>>s1;
bool result=palindromecheck(s1,0,s1.size()-1);
if(result){
    cout<<"True";
}
else{
    cout<<"False";
}
}