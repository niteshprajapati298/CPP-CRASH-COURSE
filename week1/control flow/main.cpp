#include<iostream>
using namespace std;

int main() {
    // Budget input
    int budget;
    cout << "Enter your Budget: ";
    cin >> budget;

    // if statement
    if(budget > 200000) {
        cout << "You can buy Scorpio" << endl;
    }

    // if else statement
    if(budget > 2000000) {
        cout << "You can buy Scorpio" << endl;
    } else {
        cout << "You cannot buy Scorpio" << endl;
    }

    // if else if statement
    int marks = 43;
    if(marks > 90) {
        cout << "A" << endl;
    } else if (marks > 80) {
        cout << "B" << endl;
    } else if (marks > 70) {
        cout << "C" << endl;
    } else if (marks > 60) {
        cout << "D" << endl;
    } else {
        cout << "Failed" << endl;
    }

    // Nested if: height and weight input
    int height;
    cout << "Enter height: ";
    cin >> height;

    int weight;
    cout << "Enter your weight: ";
    cin >> weight;

    if(height > 5) {
        if(weight > 70) {
            cout << "You got a good BMI" << endl;
        } else {
            cout << "Bhai tujhse na ho payega" << endl;
        }
    } else {
        cout << "Complain dila du" << endl;
    }

    return 0;
}
