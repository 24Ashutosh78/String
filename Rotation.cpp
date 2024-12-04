#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abcdef";
    int n = str.length();
    int r;

    cout << "Enter the rotation: ";
    cin >> r;

    // Normalize r to avoid extra rotations if r > n
    r = r % n;

    // Generate rotated string
    string rotated = str.substr(r)+str.substr(0, r); 

    cout << "Rotated string: " << rotated << endl;

    return 0;
}
