// A simple math calculator
#include <iostream>
using namespace std;

int main() {
    int num1 = 0, num2 = 0, result = 0;
    char op = '+';

    // Get the first number from the user
    cout << "Enter a number: ";
    cin >> num1;

    // Get the second number from the user
    cout << "Enter another number: ";
    cin >> num2;

    // Get the operation from the user (either +, -, *, or /)
    cout << "Enter an operation (+, -, *, or /): ";
    cin >> op;

    // Perform the calculation
    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else {
        cout << "Invalid operation. Please try again." << endl;
        return 1;
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}
