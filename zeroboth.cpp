#include <iostream>

using namespace std;

void zeroBoth(int &x, int &y){
  x = 0;
  y = 0;
}

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
