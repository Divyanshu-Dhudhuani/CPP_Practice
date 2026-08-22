#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    st.push(5);
    st.push(10);
    st.push(6);
    st.push(9);
    st.emplace(100);

    cout << st.top(); //begin, end don't work
    cout << endl;

    cout << st.size();
    cout << endl;

    st.pop();
    cout << st.top();
    cout << endl;

    //we can't iterate in stacks

    cout << st.empty(); 

    stack<int> st1;
    for(int i =1; i<=5; i++){
        st1.push(i);
    }
    cout<<endl;

    cout << st1.top() << " " << st.top();
    cout << endl;
    st.swap(st1);

    cout << st1.top() << " " << st.top() << endl;

    cout << st.size();


    return 0;
}