#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;

    do {
        cout << "Digite um número de 0 a 10: ";
        cin >> numero;

        if (numero <= 4) {
            cout << "Número Inválido, tente novamente..." << endl;
        } else if (numero == 5) {
            cout << "Acertou o número, parabéns!" << endl;
        } else if (numero >= 6 && numero <= 10) {
            cout << "Número inválido, tente novamente..." << endl;
        } else {
            cout << "Número fora do intervalo de 0 a 10, tente novamente..." << endl;
        }
    } while (numero < 5 || numero > 5);

    return 0;
}

