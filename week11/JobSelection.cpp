#include<iostream>
using namespace std;
void job(){
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;
    int experience;
    cout<<"Enter your experience:";
    cin>>experience;
    cout<<"Input: Marks="<<marks<<",  Experience="<<experience<<endl;
    if (marks>=70 && experience >=2) {
        cout<<"Selected as Associate Developer"<<endl;
    } 
    else if(marks>=60 && experience >=1){
        cout<<"Selected as Assistant Developer"<<endl;
    }
    else if(marks>=50){
        cout<<"Selected as Trainee Engineer"<<endl;
    }
    else{
        cout<<"Not selected"<<endl;
    }}
int main(){
    job();
}