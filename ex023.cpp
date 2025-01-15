#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite o terceiro número: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            cout << "A ordem decrescente é: " << num1 << ", " << num2 << ", " << num3 << endl;
        } else {
            cout << "A ordem decrescente é: " << num1 << ", " << num3 << ", " << num2 << endl;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            cout << "A ordem decrescente é: " << num2 << ", " << num1 << ", " << num3 << endl;
        } else {
            cout << "A ordem decrescente é: " << num2 << ", " << num3 << ", " << num1 << endl;
        }
    } else {
        if (num1 >= num2) {
            cout << "A ordem decrescente é: " << num3 << ", " << num1 << ", " << num2 << endl;
        } else {
            cout << "A ordem decrescente é: " << num3 << ", " << num2 << ", " << num1 << endl;
        }
    }

    return 0;
}

