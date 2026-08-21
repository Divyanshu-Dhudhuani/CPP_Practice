#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    //emplace_back is generally faster than push_back
    v.emplace_back(3);
    cout << v[0] << " " << v[1] << endl;

    vector<pair<int,string>> vec;
    vec.push_back({10, "Hello"});
    //in emplace_back you don't need to give the curly braces because it assumes it to be a pair
    vec.emplace_back(15,"Bye");
    cout << vec[0].first << " " << vec[1].second << endl;

    //creates 5 instances of 20 in the container(if in forloop we change the condition to i<=5 then last element will be some garbage value or 0)
    vector<int> y(5, 20);
    for(int i=0; i<=4; i+=1){
        cout << y[i] << endl;
    }
    y.emplace_back(30);

    //creates a copy of y in z
    vector<int> z(y);
    cout << z[5] << endl;
    size_t length = sizeof(z)/sizeof(z[0]);
    cout << length <<endl;

    //returns some garbage value or 0 when we don't enter which value we need to put initially in vector
    //j++ automatically increments the value by 1 each time(j++==(j+=1))
    vector<int> a(5);
    for(int j=0; j<=4; j++){
        cout << a[j] << endl;
    }

    return 0;
}