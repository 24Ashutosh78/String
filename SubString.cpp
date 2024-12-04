#include<iostream>
using namespace std;
int main(){

    string str1="Ababababrtuion";
    string str2;
    cout<<"Enter the substring to find:";
    cin>>str2;

   // cout<<str1.find(str2);// Library Function to find Sub String Index value

    int temp=str1.find(str2);
    if(temp!=string::npos){//::npos holds -1
        cout<<temp;
    }else{
        cout<<"Not Found";
    }
}