#include <iostream>
using namespace std;

// Function to split a four-digit number and add its digits
int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10; // Add the last digit to sum
        number /= 10; // Remove the last digit
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a four-digit number: ";
    cin >> num;

    if (num < 1000 || num > 9999) {
        cout << "Invalid input. Please enter a four-digit number." << endl;
        return 1; // Exit with error
    }

    // Call the function to get the sum of digits
    int sum = sumOfDigits(num);

    cout << "Sum of digits: " << sum << endl;

    return 0;
}

