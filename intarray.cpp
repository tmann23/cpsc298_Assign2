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
    int numberArray[argc - 1];
    int num;

    for (int i = 1; i < argc; ++i){
      num = atoi(argv[i]);
      if (num >= 0){ // checking that the number is non-negative
        numberArray[i - 1] = num; // adding the number to the array
      }
    }

    cout << "Printing the numbers." << endl;
    for (int i = 0; i < argc - 1; ++i){
      cout << numberArray[i] << endl; // printing each number on its own line
    }

    return 0;
}
