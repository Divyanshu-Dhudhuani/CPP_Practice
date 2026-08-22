#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(2,100);
    //(position,element)
    v.insert(v.begin(), 5);
    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;

    //(position,occurences,element)
    v.insert(v.begin()+2, 3, 67);

    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;

    vector<int> copy(2, 69);
    //(position, start value from another vector, end value+1 from another vector)
    v.insert(v.begin(), copy.begin(), copy.end());

    for(auto it: v){
        cout << it << " ";
    }
    return 0;
}