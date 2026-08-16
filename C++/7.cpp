#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout << "Enter you age: ";
    cin >> age;
    //nested if-else
    if(age<18){
        cout << "Not eligible for job";
    }else{
        if(age>=55 && age<=57){
            cout << "Eligible for job, but retirement soon";
        } else if(age>57){
            cout << "Retirement time";
        }else {
            cout << "Eligible for job";
        }
    }
    return 0;
}