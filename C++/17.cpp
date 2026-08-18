#include <bits/stdc++.h>
using namespace std;

//returns an integer
int sum(int num1, int num2){
    return num1 + num2;
}

int main() {
    int x,y,z;
    cout << "Enter any 2 integers: ";
    cin >> x >> y;
    z = sum(x,y);
    cout << "The sum of the 2 integers is: " << z;
    return 0;
}