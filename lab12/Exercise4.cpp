#include<iostream>
using namespace std;
 int counteven(int *arr,int size){
    int even=0;
  cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++){
        cin>>*(arr+i);
    }
    cout<<"Input:";
     for(int i=0;i<size;i++){
        cout<<*(arr+i)<<" ";
        if(*(arr+i)%2==0){
            even++;
        }
    } return even;
}
int main(){
int size;
cout<<"Enter the size:";
cin>>size;
int *arr = new int [size];
int result=counteven(arr,size);
cout<<endl;
cout<<"Output: Number of even values="<<result;
delete [] arr;

}