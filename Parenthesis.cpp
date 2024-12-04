#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool isParenthesisBalanced(string& s) {
    // code here
    stack<char> s1;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            s1.push(s[i]);
        }
        if(s1.empty()){
            return false;
        }
        else{
            if(s[i]=='(' && s1.top()!=')'){
            return false;
            }
            if(s[i]=='}' && s1.top()!='}'){
                return false;
            }
            if(s[i]=='[' && s1.top()!=']'){
                return false;
            }
            s1.pop();
        }   
        if(s1.empty()){
            return true;
        }else{
            return false;
        }
        
    }
            
}

int main(){
    string s="([]"; 
    isParenthesisBalanced(s);
    cout<<" "<<isParenthesisBalanced(s);
}