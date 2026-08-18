#include <bits/stdc++.h>
using namespace std;
//if there is no return statement then the function will return some garbage value
int maxx(int num1, int num2){
    if(num1>num2){
        return num1;
    } else{
        return num2;
    }
}

int main() {
    int x=1;
    int y =2;
    cout << maxx(x, y);
    return 0;
}