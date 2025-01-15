#include <iostream>
#include <locale>

using namespace std;

int main() {
setlocale(LC_ALL, "Portuguese");

    float num1, num2, resultado;
    char operacao;

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;
    cout << "Escolha a opera��o a ser realizada (+, -, *, /): ";
    cin >> operacao;
    
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado da adi��o: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "Resultado da subtra��o: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Resultado da multiplica��o: " << resultado << endl;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado da divis�o: " << resultado << endl;
            } else {
                cout << "Erro: Divis�o por zero!" << endl;
            }
            break;
        default:
            cout << "Opera��o inv�lida!" << endl;
    }

    if (resultado == (int)resultado) {
        if ((int)resultado % 2 == 0) {
            cout << "O resultado � par." << endl;
        } else {
            cout << "O resultado � �mpar." << endl;
        }
    } else {
        cout << "O resultado � decimal." << endl;
    }
    if (resultado > 0) {
        cout << "O resultado � positivo." << endl;
    } else if (resultado < 0) {
        cout << "O resultado � negativo." << endl;
    } else {
        cout << "O resultado � zero." << endl;
    }

    if (resultado == (int)resultado) {
        cout << "O resultado � um n�mero inteiro." << endl;
    } else {
        cout << "O resultado � um n�mero decimal." << endl;
    }

    return 0;
}

