#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main() {
    int x,y,Sana,small,large;
    int correctcount=0,wrongcount=0,correctans=0;
     srand(time(0));
    while(true){
    x=1+rand()%10;
    y=1+rand()%10;
    if(x>y){
        small=x;
        large=y;

    }else{
        small=y;
        large=x;

    }
    cout<<small<<'x'<<large<<'=';
    cin>>Sana;
    if(Sana==-1){
        break;
    }

    correctans=small*large;
   if ( Sana== correctans){
    cout<<"Correct"<<endl;
    correctcount++;

   }
    else {
    cout<<"InCorrect"<<endl;
    wrongcount++;
    
   }
}
   cout<<"Fails"<<'='<<wrongcount;
   cout<<",Pass"<<'='<<correctcount;
   
}
