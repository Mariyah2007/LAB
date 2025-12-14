#include<iostream>
using namespace std;
void reversearray(int*arr,int size){
 cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>*(arr+i);
    }
    cout<<"Input:";
     for(int i=0;i<size;i++){
        cout<<*(arr+i)<<" ";}
    int *start=arr;
    int *end=arr+size-1;
    while(start<end){
        int temp =*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }   cout<<endl;
          cout<<"Output:";   
        for(int i=0;i<size;i++){
           
        cout<<*(arr+i)<<" ";

    }
}               
        
    
int main(){
 int size;
 cout<<"Enter the size:";
 cin>>size;
 int *arr=new int[size];
 reversearray(arr,size);
 delete[] arr;
}