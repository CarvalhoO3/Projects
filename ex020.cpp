#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3;
    cout << "digite um número: ";
    cin >> num1;
    cout << "digite outro número: ";
    cin >> num2;
    cout << "digite outro número: ";
    cin >> num3;
 int maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    cout << "O maior número é: " << maior << endl;

    return 0;
}
