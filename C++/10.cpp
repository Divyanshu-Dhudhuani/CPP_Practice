#include<bits/stdc++.h>
using namespace std;

int main(){
    //2D array
    //first comes the rows and then columns
    int arr[3][5];
    arr[1][3] = 55;
    cout <<"\n" << arr[1][3] << "\n";
    //prints some garbage value as we didn't assign any value at that spot
    cout << arr[1][1] << "\n";

    return 0;
}