#include<iostream>
using namespace std;
bool subset(string s1,string s2,int i=0,int j=0){
    if( i==s1.length()) return true;
    if(j==s2.length()) return false;
    if(s1[i]=s2[j])
        return subset(s1,s2,i+1,j+1);
        return subset(s1,s2,i,j+1);
    } 
int main(){
string s1;
cout<<"Enter the first string:";
cin>>s1;
string s2;
cout<<"Enter the second string:";
cin>>s2;
subset(s1,s2);
    if(subset(s1,s2)){
        cout<<"First string is subset of second";
    }
    else{
        cout<<"Not a subset";
    }
}