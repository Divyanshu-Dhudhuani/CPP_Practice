#include <bits/stdc++.h>
using namespace std;

int main() {
    //It is a datatype just like integer,string etc..
    //1
    pair<int, int> p = {1,2};
    cout << p.second << " "<< p.first << endl;

    //2 nest pair
    pair<int, pair<int, int>> x = {10, {5, 4}};
    cout << x.second.first << " " << x.first << " " << x.second.second << endl;

    //3 pair as array(here we didn't give the size which means it can have any size)
    pair<int, int>y[] = {{1,2}, {3,4}, {4,5}, {6,7}};
    cout << y[0].second << " " << y[3].first;
    //sizeof is used to return the bytes it is occupying. We get bytes for 4 elements so if we divide it by bytes of 1 element then we will get the number of elements in the array;
    size_t length = sizeof(y)/sizeof(y[0]);
    cout << endl << "The size is " << length;

    pair<int, string> l = {1, "Hello"};
    cout << endl << l.second << " " << l.first;
    return 0;
}