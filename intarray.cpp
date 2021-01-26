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
    /* declaring array of size 10 without specifying values
    so command line arguments can be used */
    int numberArray[10];
    int num;
    int count = 0;

    for (int i = 1; i < argc; ++i){
      num = atoi(argv[i]);
      if (num >= 0){ // checking that the number is non-negative
        ++count; // only incrementing if the number is valid (non-negative)
        numberArray[i - 1] = num; // adding the number to the array
      }
    }

    cout << "Printing the numbers:" << endl;
    for (int i = 0; i < count; ++i){
      cout << numberArray[i] << endl; // printing each number on its own line
    }

    return 0;
}
