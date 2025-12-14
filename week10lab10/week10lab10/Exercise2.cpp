#include<iostream>
using namespace std;
bool palindrome(string s1,int i,int j){
if(i>=j) return true;
if(s1[i]!=s1[j]) return false;
    return palindrome(s1,i+1,j-1);

}

int main(){
    string s1;
    cout<<"Input :";
    cin>>s1;
    int j=s1.length();
   if(palindrome(s1,0,s1.length()-1)){
    cout<<"Output:palindrome"<<endl;
   }else{
    cout<<"Output:Not a palindrome"<<endl;
   }

}