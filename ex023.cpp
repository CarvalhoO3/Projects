#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, num3;
    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;
    cout << "Digite o terceiro n�mero: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            cout << "A ordem decrescente �: " << num1 << ", " << num2 << ", " << num3 << endl;
        } else {
            cout << "A ordem decrescente �: " << num1 << ", " << num3 << ", " << num2 << endl;
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            cout << "A ordem decrescente �: " << num2 << ", " << num1 << ", " << num3 << endl;
        } else {
            cout << "A ordem decrescente �: " << num2 << ", " << num3 << ", " << num1 << endl;
        }
    } else {
        if (num1 >= num2) {
            cout << "A ordem decrescente �: " << num3 << ", " << num1 << ", " << num2 << endl;
        } else {
            cout << "A ordem decrescente �: " << num3 << ", " << num2 << ", " << num1 << endl;
        }
    }

    return 0;
}

