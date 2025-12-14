#include<iostream>
using namespace std;
int searchnumber(int A[10],int a,int &index,int i){
if(i>9) return false;
 if(A[i]==a){
    index=i;
    return index;
 }
 else{
    return searchnumber(A,a,index,i+1);
 }
}
int main(){
 int A[10]={5,4,3,2,1,6,10,9,7,8};
  cout<<"Input array:" ;
 for(int i=0;i<10;i++){
 cout<<A[i]<< " ";
}
cout<<endl;
int number;
cout<<"Search for: ";
cin>>number;
int index=0;
searchnumber(A,number,index,0);
cout<<"Output :   Element found at index " <<index;
}