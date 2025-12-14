#include<iostream>
using namespace std;
struct phone{
    int areacode;
    int exchange;
    int number;

};
int main(){
phone s1;
phone s2;
s1.areacode=212;
s1.exchange=767;
s1.number=8900;
cout<<"Enter area code:";
cin>>s2.areacode;
cout<<"Enter exchange:";
cin>>s2.exchange;
cout<<"Enter  number:";
cin>>s2.number;
cout<<"My number is ("<<s1.areacode<<") "<<s1.exchange<<"-"<<s1.number<<endl;
cout<<"Your  number is ("<<s2.areacode<<") "<<s2.exchange<<"-"<<s2.number;



}