#include <iostream>
#include <iomanip>

using namespace std;

double addTax(double taxRate, double cost){
  double finalCost;
  finalCost = cost + (cost * taxRate);
  return finalCost;
}

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
