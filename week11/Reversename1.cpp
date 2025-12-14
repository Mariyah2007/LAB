#include<iostream>
#include<string>
using namespace std;
string reversename(string s1,string s2){
    string result=s1+" "+s2;
    int n=result.length();
    int i=0,j=n-1;
    while(i<j){
        char temp=result[i];
        result[i]=result[j];
        result[j]=temp;
        i++;
        j--;
    }
    return result;

}

using namespace std;
int main() {
string s1;
string s2;
cout<<"First name:";
cin>>s1;
cout<<"Last name:";
cin>>s2;
cout<<"Output:"<<endl;
cout<<reversename(s1,s2);
}
    