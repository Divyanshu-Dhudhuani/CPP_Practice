#include <bits/stdc++.h>
using namespace std;

int main() {
    //the maximum value stays at the top(for characters it finds the max ASCII value)
    priority_queue<char> pq;
    pq.push('a');
    pq.push('d');
    pq.push('c');
    pq.push('b');
    pq.push('A');


    cout << pq.top() << endl;
    //pops the top most element
    pq.pop();
    cout << pq.top() << endl;
    priority_queue<string> pq1;
    //in string it check the ascii value characterwise
    pq1.push("hi");
    pq1.push("hello");


    cout << pq1.top() << endl;

    return 0;
}

/*NOTE
push() = log(n)
top = 0(1)
pop = log(n)
*/