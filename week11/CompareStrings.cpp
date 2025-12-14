#include<iostream>
#include<string>
using namespace std;
void compareStrings(string s1,string s2){
    if(s1==s2){
        cout<<"Strings are equal";
    }
    else if(s1>s2){
        cout<<"\""<<s1<<"\" is greater";}
        else{
            cout<<"\""<<s2<< "\" is greater";}
}

int main() {
    string s1,s2;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    compareStrings(s1,s2);
}
        