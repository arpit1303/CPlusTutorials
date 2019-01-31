//
// Created by Arpit Singh on 2019-01-30.
//

#include <iostream>
using namespace std;

int main(){

    int num ;

    cout << "Enter the number: ";
    cin >> num ;

    if (num > 0){

        cout << "You have entered a positive number : " << num << endl;

    }

    else {

        cout << "You have entered a negative number : " << num << endl;
    }

    cout << "This statement is always executed.";

    return 0;
}