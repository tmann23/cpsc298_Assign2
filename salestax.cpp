/*
Tara Mann
tmann@chapman.edu
CPSC 298 - Intro to C++
Assignment 2 - Loops, Arrays, & Functions
1/26/21
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

float addTax(float cost, float taxRate){
  float finalCost;
  // calculating and adding tax to get final cost
  finalCost = cost + (cost * taxRate);
  return finalCost;
}

int main(int argc, char **argv){
    /* creating an array of floats that is half the size of argc
    since the arguments come in pairs
    (minus 1 to exclude argv[0] which is the file name) */
    float costsArray[(argc - 1) / 2];
    float cost;
    float taxFloat;
    string taxString;

    int count = 0; // starting a count to use for index assignment
    // incrementing by 2 since the arguments come in pairs (one for cost, one for tax)
    for (int i = 1; i < argc; i += 2){
      cost = atof(argv[i]); // converting the string to a float
      taxString = argv[i + 1];
      taxString = taxString.substr(0, (taxString.size() - 1)); // removing the '%'
      taxFloat = atof(taxString.c_str()); // converting the string to a float
      taxFloat /= 100; // changing the percent to a decimal

      costsArray[count] = addTax(cost, taxFloat); // calling the function
      ++count;
    }

    // Printing the costs that now include sales tax
    cout << "Total costs:" << endl;
    for (int i = 0; i < count; ++i){
      cout << fixed << setprecision(2) << "$" << costsArray[i] << endl;
    }

    return 0;
}
