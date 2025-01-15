#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;

    do {
        cout << "Digite um n�mero de 0 a 10: ";
        cin >> numero;

        if (numero <= 4) {
            cout << "N�mero Inv�lido, tente novamente..." << endl;
        } else if (numero == 5) {
            cout << "Acertou o n�mero, parab�ns!" << endl;
        } else if (numero >= 6 && numero <= 10) {
            cout << "N�mero inv�lido, tente novamente..." << endl;
        } else {
            cout << "N�mero fora do intervalo de 0 a 10, tente novamente..." << endl;
        }
    } while (numero < 5 || numero > 5);

    return 0;
}

