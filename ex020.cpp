#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3;
    cout << "digite um n�mero: ";
    cin >> num1;
    cout << "digite outro n�mero: ";
    cin >> num2;
    cout << "digite outro n�mero: ";
    cin >> num3;
 int maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    cout << "O maior n�mero �: " << maior << endl;

    return 0;
}
