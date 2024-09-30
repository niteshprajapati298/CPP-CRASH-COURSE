#include <iostream>
#include <cmath>

using namespace std;

// Function to print counting from 1 to 100
void printCounting() {
    for (int i = 1; i <= 100; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;  // 0 and 1 are not prime numbers
    for (int i = 2; i <= sqrt(n); i++) {  // Only loop up to sqrt(n) for efficiency
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print prime numbers from 1 to 100
void printPrimes() {
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Function to calculate simple interest
int calculateSimpleInterest(int p, int r, int t) {
    int SI = (p * r * t) / 100;
    return SI;
}

// Function to check if a person is eligible to vote
void checkVotingEligibility(int age) {
    if (age >= 18) {
        cout << "Congrats! You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }
}

// Function to calculate SIP (Systematic Investment Plan)
// M = P × [{(1 + i)^n – 1} / i] × (1 + i)
double calculateSIP(int p, double i, int n) {
    // Convert the interest rate to a monthly rate (if it's annual)
    i = i / 100 / 12;

    // Future Value of SIP formula
    double M = (p * (pow(1 + i, n) - 1) / i) * (1 + i);
    
    return M;
}

int main() {
    // Print prime numbers from 1 to 100
    cout << "Prime numbers from 1 to 100:" << endl;
    printPrimes();

    // Check voting eligibility
    int age;
    cout << "Enter your age: ";
    cin >> age;
    checkVotingEligibility(age);

    // Example of calculating simple interest
    int principal = 1000;
    int rate = 5;  // Rate of interest (percentage)
    int time = 2;  // Time in years
    cout << "Simple Interest for P = 1000, R = 5%, T = 2 years: " 
         << calculateSimpleInterest(principal, rate, time) << endl;

    // Example of calculating SIP
    int sipPrincipal = 5000;  // Monthly investment
    double annualRate = 12;   // Annual interest rate (percentage)
    int months = 240;         // Investment duration in months (20 years)
    cout << "SIP Future Value for P = 5000, Rate = 12%, Duration = 240 months: "
         << calculateSIP(sipPrincipal, annualRate, months) << endl;

    return 0;
}
