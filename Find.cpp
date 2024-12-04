#include<iostream>
using namespace std;

int main(){
    string str1="Ashu Tiwari";
    int i=0;
    char key;
    cout<<"Enter the key:";
    cin>>key;
    
    while(i!=str1.length()){
        if(key==str1[i]){
            cout<<"Found at :"<<i;
        }
        i++;
    }
    cout<<"Not found.";
    return 0;
}