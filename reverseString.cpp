#include<iostream>
using namespace std;
int main(){

    string str1="Ababababrtuion";
    int i=0,j=str1.length()-1;
    while(i<j){
        swap(str1[i],str1[j]);
        i++;
        j--;
    }
    for(i=0;i<=str1.length();i++){
        cout<<""<<str1[i];
    }
    return 0;
}