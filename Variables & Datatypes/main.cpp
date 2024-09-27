#include<iostream>
#include<cmath>
using namespace std;

// Function to convert Decimal to Binary using the division method
int decimalToBinaryMethod(int n) {
    int i = 0;
    int binaryNo = 0;
    
    while(n > 0) {
        int bit = n % 2;
        binaryNo = bit * pow(10, i++) + binaryNo;
        n = n / 2;
    }
    
    return binaryNo;
}

// Function to convert Decimal to Binary using the bitwise method
int decimalToBinaryMethod2(int n) {
    int i = 0;
    int binaryNo = 0;
    
    while(n > 0) {
        int bit = (n & 1);
        binaryNo = bit * pow(10, i++) + binaryNo;
        n = n >> 1;
    }
    
    return binaryNo;
}

// Function to convert Binary to Decimal
int binaryToDecimal(int n) {
    int decimal = 0;
    int i = 0;

    while (n) {
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i++);
        n /= 10;
    }
    
    return decimal;
}

int main() {
    // Example of variable definition and output
    int age = 18;
    cout << "Nitesh's Age is: " << age << endl;

    // Example of variable declaration (uninitialized)
    int age2;
    cout << "Uninitialized variable age2: " << age2 << endl;

    // Example of variable definition (initialized)
    int age3 = 21;
    cout << "Initialized variable age3: " << age3 << endl;

    // Manipulation or updating the value of a variable
    age3 = 101;
    cout << "Updated age3: " << age3 << endl;

    // Example of different data types
    int count = 5;            // Integer data type
    float share = 3.14;       // Float data type
    char alphabet = 'a';      // Character data type
    double weight = 55.234342; // Double data type (stores bigger numbers)
    bool isMale = true;       // Boolean data type (true/false)

    // Output of the different data types
    cout << "count: " << count << endl;
    cout << "share: " << share << endl;
    cout << "alphabet: " << alphabet << endl;
    cout << "weight: " << weight << endl;
    cout << "isMale: " << isMale << endl;

    // Boolean can also be represented with 1 (true) and 0 (false)
    bool isChild = 1;
    bool isFemale = false;
    bool isGirl = 0;

    // Output boolean values
    cout << "isChild: " << isChild << endl;
    cout << "isFemale: " << isFemale << endl;
    cout << "isGirl: " << isGirl << endl;

    // Example of using sizeof to get the size of a data type or variable
    cout << "Size of age: " << sizeof age << " bytes" << endl;

    // Taking input and calling functions
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    // Uncomment the method you want to test for decimal to binary conversion
    // cout << "Decimal to Binary (Division Method): " << decimalToBinaryMethod(n) << endl;
    // cout << "Decimal to Binary (Bitwise Method): " << decimalToBinaryMethod2(n) << endl;

    cout << "Binary to Decimal: " << binaryToDecimal(n) << endl;

    return 0;
}
