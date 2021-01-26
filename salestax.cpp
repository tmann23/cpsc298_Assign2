/*
Tara Mann
tmann@chapman.edu
CPSC 298 - Intro to C++
Assignment 2 - Loops, Arrays, & Functions
1/26/21
*/

#include <iostream>
#include <iomanip>

using namespace std;

// ask if the tax is gonna be like "10%" or "0.10"
double addTax(double taxRate, double cost){
  double finalCost;
  // calculating and adding tax to get final cost
  finalCost = cost + (cost * taxRate);
  return finalCost;
}

// possibly deleted, if not, clean up and add comments
int main(int argc, char **argv){
    double result1;
    double result2;
    double result3;

    result1 = addTax(0.10, 20.0);
    result2 = addTax(0.05, 10.0);
    result3 = addTax(0.15, 50.0);

    cout << "result1: ";
    cout << fixed << setprecision(2) << result1 << endl;
    cout << "result2: " << result2 << endl;
    cout << "result3: " << result3 << endl;

    return 0;
}
