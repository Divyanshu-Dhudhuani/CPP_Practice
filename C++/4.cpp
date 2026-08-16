#include<bits/stdc++.h>
using namespace std;

int main(){
    //string without getline
    // string s;
    // cout << "Enter s\n";
    // cin >> s;
    // cout << "The string without getline: " << s;
    //string and getline(pickups the line as a string)
    //strings are stored using ""
    string r;
    cout << "\nEnter r: ";
    getline(cin, r);
    cout << "\nThe string with getline: " <<r;

    //character is stored using ''
    char ch = 'g';
    cout << "\nThe character is: " << ch;
    return 0;
}