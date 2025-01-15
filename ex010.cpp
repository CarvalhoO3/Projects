#include <iostream>
#include <locale>
using namespace std;

int main() {
	  setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    float num3, produto, cubo, soma;

    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;

    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    cout << "Digite o número real: ";
    cin >> num3;
    produto = (2 * num1) * (num2 / 2.0);
    cout << "O produto do dobro do primeiro com metade do segundo é: " << produto << endl;
    soma = (3 * num1) + num3;
    cout << "A soma do triplo do primeiro com o terceiro é: " << soma << endl;
    cubo = num3 * num3 * num3;
    cout << "O terceiro elevado ao cubo é: " << cubo << endl;

    return 0;
}

