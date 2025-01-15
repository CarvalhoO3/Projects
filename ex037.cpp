#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero;
    int fatorial = 1;

cout << "Digite um n�mero inteiro para calcular o fatorial: ";
cin >> numero;

    if (numero < 0) {
        cout << "O fatorial de n�meros negativos n�o � definido." << endl;
    } else if (numero == 0) {
        cout << "O fatorial de 0 � 1." << endl;
    } else {
        for (int i = 1; i <= numero; ++i) {
            fatorial *= i;
        }
        cout << "O fatorial de " << numero << " � " << fatorial << endl;
    }

    return 0;
}

