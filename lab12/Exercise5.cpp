#include<iostream>
using namespace std;
int *mergeArrays(int *a, int sizeA, int *b, int sizeB){
     cout<<"Enter the elements of arrayA:";
    for(int i=0;i<sizeA;i++){
        cin>>*(a+i);
    } 
     cout<<"Enter the elements of arrayB:";
    for(int j=0;j<sizeB;j++){
        cin>>*(b+j);
    } 
    cout<<"Input:"<<endl;
    cout<<"A ={";
    for(int i=0;i<sizeA;i++){
       cout<<*(a+i);
       if(i==sizeA-1){
        cout<<"}";
       }if(i!=sizeA-1){
       cout<<",";
    } }
    cout<<endl;
    cout<<"B ={";
    for(int i=0;i<sizeB;i++){
       cout<<*(b+i);
         if(i==sizeB-1){
        cout<<"}";
    }if(i!=sizeB-1){
    cout<<",";}}
    cout<<endl;
    int sizeC=sizeA+sizeB;
    int *mergearr=new int[sizeC];
    for(int i=0;i<sizeA;i++){
        *(mergearr+i)=*(a+i);}   
    for(int i=0;i<sizeB;i++){
    *(mergearr+i+sizeA)=*(b+i);}   
    
    return mergearr;
}
int main(){
    int sizeA;
    cout<<"Enter the size of array a:";
    cin>>sizeA;
    int sizeB;
    cout<<"Enter the size of array b:";
    cin>>sizeB;
    int *a=new int[sizeA];
    int *b=new int [sizeB];
    int *merged=mergeArrays(a,sizeA,b,sizeB);
    cout<<"Output:"<<endl<<"Merged = ";
    for(int i = 0; i < sizeA + sizeB; i++)
        cout << merged[i] << " ";
}