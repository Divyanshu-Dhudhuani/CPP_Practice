#include <bits/stdc++.h>
using namespace std;

//by default arrays are passed by reference
void doSomething(int arr[]){
    arr[0] = 5;
    cout << "The value of first element in function: " << arr[0] << endl;
}


int main() {
    int arr[5];
    for(int i=0; i<=4; i +=1){
        cin >> arr[i];
    }
    doSomething(arr);
    cout << "The value of first element in int main: " << arr[0] << endl;
    
    return 0;
}