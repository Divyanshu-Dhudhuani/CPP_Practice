#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Striver";
    int len = s.size();
    cout << s[3] << "\n";
    //every string is made up of characters hence we have to use single quotes
    //strings are mutable
    s[3] = 'r';
    cout << s;

    return 0;
}