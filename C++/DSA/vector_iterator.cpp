#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.emplace_back(10);
    v.emplace_back(20);
    v.emplace_back(30);
    v.emplace_back(40);

    //it contains the address of the location of the element. To access element from address use *(iterator)
    vector<int>::iterator it = v.begin();
    cout << *(it) << endl;
    it++;
    cout << *(it) << endl;

    //v.end() points to the address of the location after the last element hence to print the last element we need to type iterator--
    vector<int>::iterator x = v.end();
    x--;
    cout << *(x) << endl;

    //first method using for loops
    for(vector<int>::iterator y = v.begin(); y!=v.end(); y++){
        cout << *(y) << " ";

    }
    cout << endl;

    //second method using for loops
    //auto automatically finds the datatype
    for(auto z = v.begin(); z!=v.end(); z++){
        cout << *(z) << " ";
    }
    cout << endl;
    //third method using for loops
    for(auto r : v){
        cout << r << " ";
    }

    cout << endl;   
    //VERY IMPORTANT AND NEW METHOD TO TRAVEL IN AN ARRAY
    int arr[5] = {1,2,3,4,5};
    for(int l : arr){
        cout << l << " ";
    }


    return 0;
}