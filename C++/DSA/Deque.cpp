#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq(5, 10);
    dq.emplace_front(5);
    dq.emplace_back(9);
    cout << dq.front();
    cout << endl;
    cout << dq.back();
    cout << endl;

    for(auto it: dq){
        cout << it <<  " ";
    }

    //begin, rend, rbegin, end, clear, insert, size, swap are same as vectors

    return 0;
}