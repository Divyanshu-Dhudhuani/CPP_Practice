#include<bits/stdc++.h>
using namespace std;

int main(){
    //do while loop
    int i =10;
    /*do-while loop executes the loop atleast once even if the condition is not satisfied
    it first executes the statement and then checks the condition in while loop */
    do {
        cout << "This is the value of i " << i << endl;
        i +=1;
    }while(i<10);
    cout << "The value of i now is " << i << endl;

    do {
        cout << "Striver" << endl;
        i+=1;
    } while(i>11 && i<=20);

    return 0;
}