#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
using namespace std;
 void stats(double arr[],int N){
    double sum=0.0,mean=0.0;
    for (int i = 0; i < N; i++){
        sum += arr[i];}
        mean=sum/N;
        double variance=0.0,stddev=0.0;
        for (int i = 0; i < N; i++){
        variance += pow(arr[i] - mean, 2);}

    variance /= N-1; 
stddev= sqrt(variance);  
 cout<<endl<<"Output: Mean = "<<mean<<", Std.Dev =  "<<stddev;}  
void random(){
    double arr[100000];
  int N,R;
  cout<<"Enter the range:"<<endl;
  cin>>R;
  cout<<"Enter the numbers to be produced:"<<endl;
  cin>>N;
  srand(time(0));
  cout<<"Input:";
  if(N > 100000) {
        cout << " Use within the limit of 100000.\n";
        N = 100000;
    }
  for(int i=0;i<N;i++){
  arr[i]=rand()%R;
  cout<<" "<<arr[i];
  }  stats(arr,N);}
    
int main() {
 random();  
}




