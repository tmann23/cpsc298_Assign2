#include <iostream>

using namespace std;

// question: is the length read in like 5' 1" or 61"
// and is it supposed to be output like 1 meter and 54 cm or 1.54 meters and 154 cm?
void getInput();
void calculateLength(double feet, double inches);
void outputLength(int meters, int cm);

void getInput(){
  double feet;
  double inches;
  string userInput;

  cout << "Calculate length? (yes/exit)" << endl;
  cin >> userInput;

  while (userInput != "exit") {
    cout << "Enter number of feet: " << endl;
    cin >> feet;
    cout << "Enter number of remaining inches: " << endl;
    cin >> inches;

    calculateLength(feet, inches);

    cout << "Calculate length? (yes/exit)" << endl;
    cin >> userInput;
  }
}

void calculateLength(double feet, double inches){
  double totalLength;
  int meters;
  int cm;
  const double METERS_IN_FOOT = 0.3048;

  totalLength = feet + (inches / 12.0);
  totalLength *= METERS_IN_FOOT;
  totalLength *= 100;

  meters = int(totalLength) / 100;
  cm = int(totalLength) % 100;

  outputLength(meters, cm);
}

void outputLength(int meters, int cm){
  cout << endl;
  cout << "Number of meters: " << meters << endl;
  cout << "Number of remaining centimeters: " << cm << endl;
  cout << endl;
}

int main(int argc, char **argv){
    getInput();
    return 0;
}
