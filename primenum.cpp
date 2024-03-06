#include <iostream>
using namespace std;
int main() {
  int num,i;
  cout << "Enter a number: ";
  cin >> num;
 for (i = 2; i < num; i++) {
    if (num % i == 0) {
      cout << num << " is a composite number." << endl;
      return 0;
    }
  }

cout << num << " is a prime number." << endl;
  return 0;
}
