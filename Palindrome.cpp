#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// void reverse(string& s){
//     int i=0,j=s.length();
//     while(i<j){
//         swap(s[i],s[j]);
//     }
// }

bool isPalindrome(string& s) {
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;        
    }
    return true;

}
int main(){
    string s="abba"; 
    isPalindrome(s);
    cout<<" "<<isPalindrome(s);
}