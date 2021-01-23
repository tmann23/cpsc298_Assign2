#include <iostream>

using namespace std;

int main(int argc, char **argv){
    int numberArray[10];

    for (int i = 0; i < numberArray.size(); ++i){
      cout << "Enter a nonnegative number" << endl;
      cin >> numberArray[i];
    }

    for (int i = 0; i < numberArray.size(); ++i){
      cout << numberArray[i] << endl;
    }

    return 0;
}
