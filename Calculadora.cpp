#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    char operation;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> operation;

    float result;

    switch (operation) {
    case '+':
        result = num1 + num2;
        cout << "La suma es: " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "La diferencia es: " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "El producto es: " << result << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "La división es: " << result << endl;
        }
        else {
            cout << "Error: No se permite la división por cero." << endl;
        }
        break;
    default:
        cout << "Operación no válida." << endl;
        break;
    }

    return 0;
}
