#include<iostream>
#include<vector>
using namespace std;
 bool check(vector<int>&arr1,vector<int>&arr2,int i=0){
   if(i==arr1.size()) return true;
    if(arr1[i]!=arr2[i]) return false;
     return check(arr1,arr2,i+1);
}
int main(){
vector<int>arr1;
vector<int>arr2;
int size1,size2;
cout<<"Enter the size of first array:";
cin>>size1;
cout<<"Enter the size of second array :";
cin>>size2;
if(size1!=size2) {
cout<<"Sizes are not equal";
return 0;}
int element1;
  cout<<"Enter the elements of first array:";
    for(int i=0;i<size1;i++){
    cin>>element1;
    arr1.push_back(element1);
}int element2;
 cout<<"Enter elements of second array:";
for(int j=0;j<size2;j++){
    cin>>element2;
    arr2.push_back(element2);
}
if(check(arr1,arr2)){
cout<<" Elements of array are equal";
}
else{
cout<<"Size and elements of array are not equal";
   }
}