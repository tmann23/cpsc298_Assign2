/*
Tara Mann
tmann@chapman.edu
CPSC 298 - Intro to C++
Assignment 2 - Loops, Arrays, & Functions
1/26/21
*/

// question: for the problems about creating a function, do we need to write code for a main method to test it?

#include <iostream>

using namespace std;

/* function with pass-by-reference parameters
to change both values to zero */
void zeroBoth(int &x, int &y){
  x = 0;
  y = 0;
}

// possibly deleted, if not, clean up and add comments
int main(int argc, char **argv){
    int a = 9;
    int b = 3;

    cout << "Value of a before: " << a << endl;
    cout << "Value of b before: " << b << endl;

    zeroBoth(a, b);

    cout << "Value of a after: " << a << endl;
    cout << "Value of b after: " << b << endl;

    return 0;
}
