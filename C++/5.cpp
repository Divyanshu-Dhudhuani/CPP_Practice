#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout << "Enter your age";
    cin >> age;
    if(age>=18){
        cout << "You are an adult";
    } else if(age<18 && age>=0){
        cout << "Your are not an adult";
    }else {
        cout << "Please enter a valid age";
    }
    return 0;
}