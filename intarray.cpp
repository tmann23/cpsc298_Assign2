/*
Tara Mann
tmann@chapman.edu
CPSC 298 - Intro to C++
Assignment 2 - Loops, Arrays, & Functions
1/26/21
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv){
    /* declaring array of size 10 but not specifying values
    so user input can be used */
    int numberArray[10];
    int num;

    for (int i = 0; i < 10; ++i){
      cout << "Enter a non-negative number:" << endl;
      cin >> num; // getting user input
      while (num < 0){ // checking that the number is non-negative
        cout << "Invalid input, enter a non-negative number:" << endl;
        cin >> num; // getting user input
      }
      numberArray[i] = num; // adding the number to the array
    }

    cout << endl;
    cout << "Printing the numbers." << endl;
    for (int i = 0; i < 10; ++i){
      cout << numberArray[i] << endl; // printing each number on its own line
    }

    return 0;
}
