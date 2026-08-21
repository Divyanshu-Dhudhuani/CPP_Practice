#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(5,100);
    v.insert(v.begin(), 10);
    v.insert(v.end(), 30);

    for(auto it:v){
        cout << it << " ";
    }

    cout << endl;

    //removes the last element and doesn't return anything
    v.pop_back();

    for(auto it:v){
        cout << it << " ";
    }

    vector<int> v2(5, 10);
    //to swap it should be of same datatype
    v.swap(v2);

    cout << endl;

    for(auto it:v){
        cout << it <<  " ";
    }
    cout << endl;

    for(auto it:v2){
        cout << it << " ";
    }
    cout << endl;

    cout << "Checking if v is empty or not: " << v.empty();

    cout << endl;

    cout << "The size of vector v is: " << v.size();

    cout << endl;

    v.clear();

    cout << "Checking if v is empty or not: " << v.empty(); 


    return 0;
}