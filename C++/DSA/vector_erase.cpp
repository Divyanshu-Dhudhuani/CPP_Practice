#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for(int i =10; i<=50; i+=10){
        v.emplace_back(i);
    }

    cout << "The fourth element is: " << *(v.begin()+3) << endl;

    //erasing one element(you need to give the address of that element)
    v.erase(v.begin()+3);

    cout << "Now the fourth element is: " << *(v.begin()+3) << endl;

    for(auto it : v){
        cout << it << endl;
    }

    cout << "after deleting a range of values: " << endl;
    //for deleting in range 
    //[start,end) the element before the end address given gets deleted
    v.erase(v.begin(), v.begin()+2);

    for(auto it: v){
        cout << it << endl;
    }
    return 0;
}