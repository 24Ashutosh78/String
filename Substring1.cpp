#include<iostream>
using namespace std;
int main(){

    string str1="Ababababrtuion";
    string str2;
    cout<<"Enter the substring to find:";
    cin>>str2;
    bool found=false;
    for(int i=0;i<=str1.length()-str2.length();i++){
        if(str1.substr(i,str2.length())==str2){
            cout<<"Found at index"<<i<<endl;
            found =true;
            break;
        }
    }
    if(!found){
        cout<<"Not Found"<<endl;
    }

    return 0;
}