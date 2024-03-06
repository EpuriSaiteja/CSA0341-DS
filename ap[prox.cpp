#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float num;

  cout << "Enter a number: ";
  cin >> num;
  int s = floor(num);
  int a = ceil(num);
  if(num - s < a - num) {
      cout << s;
  }
  else{
      cout << a;
  }

  return 0;
}
