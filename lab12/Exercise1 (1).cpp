#include<iostream>
using namespace std;
int maxelement(int *arr,int size){
    cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>*(arr+i);
    }
    cout<<"Input:";
     for(int i=0;i<size;i++){
        cout<<*(arr+i)<<" ";
    }
  int *max=arr;
  for(int i=1;i<size;i++){
    if(*(arr+i)>*max){
      max=(arr+i);
    }
  }
   return *max;
}
int main(){
    int size;
    cout<<"Enter the size:";
    cin>>size;

    int *arr = new int [size];
   int result=maxelement(arr,size);
   cout<<endl;
  cout<<"Output: Maximum =";
  cout<<result;
  delete[] arr;

}