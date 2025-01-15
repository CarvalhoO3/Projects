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
    int maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }
    int menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    cout << "O maior número é: " << maior << endl;
    cout << "O menor número é: " << menor << endl;

    return 0;
}

