#include<iostream>
using namespace std;
void replaceChar(char *text, char oldC, char newC){
      char *ptr = text;    
    
    while (*ptr != 0) { 
        if (*ptr == oldC) {
            *ptr = newC;  
        }
        ptr++;            
}
  
 }
int main(){
int size;
cout<<"Enter the max size of text:";
cin>>size;
char oldC;
cout<<"Enter the character to be removed:";
cin>>oldC;
char newC;
cout<<"Enter the character to be replaced with: ";
cin>>newC;
char *text=new char[size+1];
cin.ignore();
cout<<"Input text:";
cin.getline(text,size+1);
replaceChar(text,oldC,newC);
cout<<"Replace :"<<oldC<<"   "<<newC<<endl;
cout<<"Output :"<<text;
delete []text;}