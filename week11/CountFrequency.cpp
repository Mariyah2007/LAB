
#include<iostream>
using namespace std;

void countnumber(int size, int num[]){
    for(int i=0; i<size; i++){
        do {
    cout << "Enter number " << i+1 << " from 0 to 10: ";
    cin >> num[i];
    if(num[i] < 0 || num[i] > 10)
    cout << "Invalid Input" << endl;
        } while(num[i] < 0 || num[i] > 10);
    }
   cout<<"Output:"<<endl;
    for(int i=0; i<size; i++){
        int count = 0;
        for(int j=0; j<size; j++){
            if(num[i] == num[j])
                count++;
        }

    bool printed = false;
    for(int k=0; k<i; k++){
    if(num[i] == num[k]){
    printed = true;
    break;
            }
        }
        if(!printed){
            cout << num[i] << " -> " << count << " times" << endl;
        }
    }
}

int main(){
    int size;
    int num[100];
    cout << "Enter the size of the array: ";
    cin >> size;
    if(size <= 0 || size > 100){
        cout << "Sorry this size is not feasible" << endl;
        return 0;
    }
    countnumber(size, num);
    return 0;
}
