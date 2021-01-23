#include <iostream>

using namespace std;

int main(int argc, char **argv){
    int numberArray[10];
    int num;

    for (int i = 0; i < 10; ++i){
      cout << "Enter a non-negative number:" << endl;
      cin >> num;
      while (num < 0){
        cout << "Invalid input, enter a non-negative number:" << endl;
        cin >> num;
      }
      numberArray[i] = num;
    }

    cout << endl;
    cout << "Printing the numbers." << endl;
    for (int i = 0; i < 10; ++i){
      cout << numberArray[i] << endl;
    }

    return 0;
}
