#include <bits/stdc++.h>
using namespace std;

//pass by value
//The function takes a copy of the variable and modifies it whereas the original variable remains untouched
void name(string s){
    s[0] = 'T';
    cout << s << endl;
}

int main() {
    string s = "Raj";
    name(s);
    cout << s << endl;
    
    return 0;
}