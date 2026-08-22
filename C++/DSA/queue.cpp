#include <bits/stdc++.h>
using namespace std;

int main() {
    //similar to stack but is FIFO
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);

    cout << q.back() << endl;
    cout << q.front() << endl;

    q.back() += 5;
    cout <<q.back() << endl;

    //pops the first element
    q.pop();
    cout << q.front() << endl;

    queue<int> q1;
    for(int i=10; i<=50; i+=10){
        q1.push(i);
    }

    q.swap(q1);

    cout << q1.front() << endl <<q.front() << endl;

    cout << q1.size() << endl;
    return 0;
}