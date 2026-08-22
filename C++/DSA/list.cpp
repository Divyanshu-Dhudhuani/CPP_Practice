#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(10);
    ls.emplace_front(9);
    //begin, rend, rbegin, end, clear, insert, size, swap are same as vectors

    for(auto it:ls){
        cout << it << " ";
    }


    return 0;
}