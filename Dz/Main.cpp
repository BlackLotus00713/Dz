#include <iostream>

using namespace std;

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        cout << "Error: division by zero" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    float num1, num2;
    char op;
    float (*func[4])(float, float) = { add, subtract, multiply, divide };
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    int index = (op == '+') ? 0 : (op == '-') ? 1 : (op == '*') ? 2 : (op == '/') ? 3 : -1;
    if (index == -1) {
        cout << "Error: invalid operator" << endl;
        return 0;
    }
    float result = func[index](num1, num2);
    cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    return 0;
}