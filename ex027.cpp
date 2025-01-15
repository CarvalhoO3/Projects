#include <iostream>
#include <locale>

using namespace std;

int main() {
setlocale(LC_ALL, "Portuguese");

    float num1, num2, resultado;
    char operacao;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Escolha a operação a ser realizada (+, -, *, /): ";
    cin >> operacao;
    
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado da adição: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "Resultado da subtração: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Resultado da multiplicação: " << resultado << endl;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado da divisão: " << resultado << endl;
            } else {
                cout << "Erro: Divisão por zero!" << endl;
            }
            break;
        default:
            cout << "Operação inválida!" << endl;
    }

    if (resultado == (int)resultado) {
        if ((int)resultado % 2 == 0) {
            cout << "O resultado é par." << endl;
        } else {
            cout << "O resultado é ímpar." << endl;
        }
    } else {
        cout << "O resultado é decimal." << endl;
    }
    if (resultado > 0) {
        cout << "O resultado é positivo." << endl;
    } else if (resultado < 0) {
        cout << "O resultado é negativo." << endl;
    } else {
        cout << "O resultado é zero." << endl;
    }

    if (resultado == (int)resultado) {
        cout << "O resultado é um número inteiro." << endl;
    } else {
        cout << "O resultado é um número decimal." << endl;
    }

    return 0;
}

