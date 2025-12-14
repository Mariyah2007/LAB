#include<iostream>
using namespace std;
bool checksubsequence(string &s1,string &s2,int n,int f){
  if(f==s2.length()) return true;
    if(n == s1.length()) return false;
    if(s1[n]==s2[f]) {
  return checksubsequence(s1,s2,n+1,f+1);

    } 
   else{
  return checksubsequence(s1, s2, n+1, f);
    } 

}
int main(){
string s1;
cout<<"Enter the first string(must be the longer string):";
cin>>s1;
string s2;
cout<<"Enter the second string(must be the smaller string):";
cin>>s2;
cout<<"Input:"<<s2<<" ,"<<s1<<endl;
bool result=checksubsequence(s1,s2,0,0);
if(result){
    cout<<"true";

}
else{
    cout<<"false";
}

}