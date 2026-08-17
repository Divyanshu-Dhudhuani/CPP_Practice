#include<bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cout << "Enter a number between 1 and 7: ";
    cin >> day;

    switch(day){
        case 1:
            cout << "Monday";
            //break statement so that it breaks out of the switch-case block
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Please enter a number between 1 and 7!";
            break;

        cout << "Check whether it has exited the switch-case block";
    }
    cout << "\nThe switch-case block has been exited";


    return 0;
}