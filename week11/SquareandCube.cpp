#include<iostream>
using namespace std;
int square(int n){
     return n*n;
    
}
int cube(int n) {
    return n*n*n;
 
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
   int  result=square(n)+cube(n);
    cout<<"Input:"<<n<<endl;
    cout<<"Output: Square ="<<square(n)<<",Cube ="<<cube(n)<<", Sum = "<<result;
}

    