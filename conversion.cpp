/*
Tara Mann
tmann@chapman.edu
CPSC 298 - Intro to C++
Assignment 2 - Loops, Arrays, & Functions
1/26/21
*/

#include <iostream>

using namespace std;

// question: is the length read in like 5' 1" or 61"
// and is it supposed to be output like 1 meter and 54 cm or 1.54 meters and 154 cm?
void getInput();
void calculateLength(double feet, double inches);
void outputLength(int meters, int cm);

/* function to get input from the user */
void getInput(){
  double feet;
  double inches;
  string userInput;

  cout << "Calculate length? (yes/exit)" << endl;
  cin >> userInput; // getting user input

  while (userInput != "exit") {
    cout << "Enter number of feet: " << endl;
    cin >> feet; // getting user input
    cout << "Enter number of remaining inches: " << endl;
    cin >> inches; // getting user input

    calculateLength(feet, inches); // calling calculate length function

    cout << "Calculate length? (yes/exit)" << endl;
    cin >> userInput; // getting user input
  }
}

/* function to convert length from feet and inches
to meters and centimeters */
void calculateLength(double feet, double inches){
  double totalLength;
  int meters;
  int cm;
  const double METERS_IN_FOOT = 0.3048; // constant because it shouldn't change

  totalLength = feet + (inches / 12.0); // getting total length in feet
  totalLength *= METERS_IN_FOOT; // getting total length in meters

  // getting length in full meters and remaining centimeters
  meters = (int)totalLength;
  cm = (int)(totalLength * 100) % 100;

  outputLength(meters, cm); // calling output length function
}

/* function to output the length in meters and centimeters
to the console */
void outputLength(int meters, int cm){
  cout << endl;
  cout << "Number of meters: " << meters << endl;
  cout << "Number of remaining centimeters: " << cm << endl;
  cout << endl;
}

// possibly deleted, if not, clean up and add comments
int main(int argc, char **argv){
    getInput();
    return 0;
}
