#include<bits/stdc++.h>
using namespace std;

int main(){
    //1D array
    //stores values from only one datatype
    //the array below have 5 boxes
    int arr[5];
    //inputs the values for all the indices of the array
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    //prints the element at 3rd index or the 4th element of the array
    cout << arr[3];

    //modifying the elements
    arr[3] += 10;
    cout << "\nThe updated value is: " << arr[3];

    //assigning a different value at the given index
    arr[3] = 10;
    cout << "\nThe new value at the 3rd index is: " << arr[3];

    return 0;
}