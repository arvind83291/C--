#include <iostream>
using namespace std;

int main() {
  char a;
  cout << "enter the value of a" << endl;
  cin >> a;
  if (a ) {
    cout << " a is positive" << endl;
  } else if (a < 0) {
    cout << "A is negative" << endl;
  } else {
    cout << "A is 0" << endl;
  }
  cout << a;
}