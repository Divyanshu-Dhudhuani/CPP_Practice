#include<bits/stdc++.h>
using namespace std;
/* for 
multiline comment*/
int main(){
    int marks;
    cout << "Please enter you marks: ";
    cin >> marks;
    //Takes alot of time
    // if(marks>=80 && marks<=100){
    //     cout << "A";
    // } if(marks>=60 && marks<80){
    //     cout << "B";
    // } if(marks>=50 && marks<60){
    //     cout << "C";
    // } if(marks>=45 && marks<50){
    //     cout << "D";
    // } if(marks>=25 && marks <45){
    //     cout << "E";
    // } if(marks>=0 && marks<25){
    //     cout << "F";
    // }

    //Takes less time
    if(marks>=80 && marks<=100){
        cout << "A";
        //If the first statement is false then it is assured that it will be less than 80 and hence we don't need to write the condition for marks<=80
    } else if(marks>=60){
        cout << "B";
    } else if(marks>=50){
        cout << "C";
    } else if(marks>=45){
        cout << "D";
    } else if(marks>=25){
        cout << "E";
    } else if(marks>=0){
        cout << "F";
    }
    
    return 0;
}