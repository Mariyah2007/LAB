#include<iostream>
using namespace std;
int sumofcube(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
       sum=sum+i*i*i; 
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
cout<<"Input: "<<n<<endl;
int result=sumofcube(n);
cout<<"Output: "<<result;
}