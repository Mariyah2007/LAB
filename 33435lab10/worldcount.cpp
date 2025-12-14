#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int wordcount(const string & text){
    int count=0;
    bool inword = false;
    for (int i=0;i<text.size();i++) {
        if (isspace(text[i])) {
            inword = false;
        } else if (!inword) {
            inword = true;
            count++;
        }
    }
    return count;
}

int main() {
string text;
cout<<"Input:"<<"  ";
getline(cin,text);
cout<<"Number of words: "<<wordcount(text);

}

