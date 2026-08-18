#include <bits/stdc++.h>
using namespace std;

//pass by reference
//Takes the address of the variable and changes its original value using '&' sign
void name(string &s){
    s[0] = 'T';
    cout << s << endl;
}

int main() {
    string s = "Raj";
    name(s);
    cout << s << endl;
    
    return 0;
}