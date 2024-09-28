#include <iostream>
using namespace std;

int main()
{
    // Q1: Print counting from 1 to 100
    for (int count = 1; count <= 100; count++)
    {
      cout << count << " ";
    }
    cout << endl; // For better readability

    // Q2: Print counting from 100 to 1
    for (int count = 100; count >= 1; count--)
    {
      cout << count << " ";
    }
    cout << endl;

    // Q3: Print your name 50 times
    for (int i = 1; i <= 50; i++)
    {
      cout << i << ": Nitesh" << endl;
    }

    // Q4: Print counting from 0 to -10 (Correction: Start from 0 and go to -10)
    for (int j = 0; j >= -10; j--)
    {
      cout << j << endl;
    }

   
    // Q2: Print table of 7
    for (int i = 1; i <= 10; i++)
    {
      cout << 7 * i << endl;
    }
    // Q5: Print Alphabet  from A to Z 

    for (char alphabet = 'A'; alphabet <= 'Z'; alphabet++)
    {
     cout<<alphabet<<endl;
    }
    // Q5: Print Alphabet  from a to z(small letter) 

    for (char alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
     cout<<alphabet<<endl;
    }
    
    return 0;
  }