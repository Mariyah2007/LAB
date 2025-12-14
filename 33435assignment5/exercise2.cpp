#include<iostream> 
using namespace std;
int main(){
    int number;
    int totalcount=0;
while(true){
    cout<<"Enter the  number:";
    cin>>number;
    if(number<0){
        break;
    }
for(int i=0;i<number;i++){
    cout<<" CSE141 Exam is in week 09 "<<endl;
    totalcount++;
} 
cout<<"***********"<<endl;
}
cout<< "The message displayed "<<totalcount<<" times "<<endl;
return 0;
}
