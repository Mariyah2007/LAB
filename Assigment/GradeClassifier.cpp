#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks";
    cin>>marks;
    if (marks <= 100 && marks >=90){
        cout<<"Grade is A";
    }else if (marks <= 89 && marks >=80){
        cout<<"Grade is B";
    }else if (marks <= 79 && marks >=70){
        cout<<"Grade is C";
    }else if (marks <= 69 && marks >=60){
        cout<<"Grade is D";
    }
    else{
        cout<<"Grade is F";
    }
    return 0;
}
