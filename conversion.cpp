/*
Tara Mann
tmann@chapman.edu
CPSC 298 - Intro to C++
Assignment 2 - Loops, Arrays, & Functions
1/26/21
*/

// no user input should be command line

#include <iostream>

using namespace std;

// function prototypes so they can access each other
void getInput();
void calculateLength(float feet);
void outputLength(float meters, float cm);

/* function to get input from the user */
void getInput(){
  float feet;
  string userInput;

  cout << "Calculate length? (yes/exit)" << endl;
  cin >> userInput; // getting user input

  while (userInput != "exit") {
    cout << "Enter number of feet: " << endl;
    cin >> feet; // getting user input

    calculateLength(feet); // calling calculate length function

    cout << "Calculate length? (yes/exit)" << endl;
    cin >> userInput; // getting user input
  }
}

/* function to convert length from feet
to meters and centimeters */
void calculateLength(float feet){
  float meters;
  float cm;
  const float METERS_IN_FOOT = 0.3048; // constant because it shouldn't change

  meters = feet * METERS_IN_FOOT; // getting total length in meters
  cm = meters * 100; // getting total length in centimeters

  outputLength(meters, cm); // calling output length function
}

/* function to output the length in meters and centimeters
to the console */
void outputLength(float meters, float cm){
  cout << endl;
  cout << "Number of meters: " << meters << endl;
  cout << "Number of remaining centimeters: " << cm << endl;
  cout << endl;
}

int main(int argc, char **argv){
    /* only need to call getInput once since the function includes a loop
    the other functions are called by the other functions,
    so they don't need to be called here */
    getInput();

    return 0;
}
