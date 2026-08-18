#include<bits/stdc++.h>
using namespace std;

//doesn't return any value
void sum(int x, int y){
    int s = x + y;
    cout << "The sum of the given numbers is: " << s;
}

int main(){
    int x,y;
    cout << "Enter the value of x and y respectively: ";
    cin >> x >> y;

    sum(x,y);
    return 0;
}