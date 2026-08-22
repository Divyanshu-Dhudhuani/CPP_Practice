#include <bits/stdc++.h>
using namespace std;

int main() {
    //a set has unique elements and sorted elements;
    set<float> s;
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.emplace(2);

    for(auto it: s){
        cout << it << " ";
    }
    cout<<endl;

    //begin,end,rbegin,rend,size,swap work the same as in vectors

    //it1 has the value of the address
    auto it1 = s.find(2);
    cout << *(it1) << endl;

    auto it2 = s.find(4);
    
    //unlike vectors you can directly delete the element without using its address
    s.erase(1);

    for(auto it: s){
        cout << it << " ";
    }
    cout << endl;
    
    s.insert(1);
    //erase[start,end)
    s.erase(it1,it2);

    for(auto it: s){
        cout << it << " ";
    }
    cout << endl;

    cout << s.count(10) << " " << s.count(4) << endl;

    s.emplace(2);
    s.emplace(3);

    //returns the address of lowest number greater than or equal to the number given as parameter in the set
    cout << *(s.lower_bound(3.5));

    //returns the address of lowest number greater than the number given as parameter in the set
    cout << endl << *(s.upper_bound(3));
    

    return 0;
}