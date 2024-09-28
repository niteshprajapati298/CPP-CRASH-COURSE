#include<iostream>
using namespace std;

int main() {

    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    // Using if-else statements
    if (grade == 'A') {
        cout << "Your marks will be in the range of 90 to 100" << endl;
    } 
    else if (grade == 'B') {
        cout << "Your marks will be in the range of 90 to 80" << endl;
    } 
    else if (grade == 'C') {
        cout << "Your marks will be in the range of 80 to 70" << endl;
    } 
    else if (grade == 'D') {
        cout << "Your marks will be in the range of 70 to 60" << endl;
    } 
    else {
        cout << "Your marks will be in the range of 0 to 60" << endl;
    }

    // Using switch statement
    switch (grade) {
        case 'A': 
            cout << "Your marks will be in the range of 90 to 100" << endl;
            break;
        case 'B': 
            cout << "Your marks will be in the range of 90 to 80" << endl;
            break;
        case 'C': 
            cout << "Your marks will be in the range of 80 to 70" << endl;
            break;
        case 'D': 
            cout << "Your marks will be in the range of 70 to 60" << endl;
            break;
        default:  
            cout << "Your marks will be in the range of 0 to 60" << endl;
            break;
    }

    return 0;
}
