/*
Tara Mann
tmann@chapman.edu
CPSC 298 - Intro to C++
Assignment 2 - Loops, Arrays, & Functions
1/26/21
*/

#include <iostream>

using namespace std;

/* function with pass-by-reference parameters
to change both values to zero */
void zeroBoth(int &x, int &y){
  x = 0;
  y = 0;
}

int main(int argc, char **argv){
    // initializing int variables using command line arguments
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    cout << "Value of a before: " << a << endl;
    cout << "Value of b before: " << b << endl;

    zeroBoth(a, b); // calling the zeroBoth function

    // a and b should both now be zero
    cout << "Value of a after: " << a << endl;
    cout << "Value of b after: " << b << endl;

    return 0;
}
