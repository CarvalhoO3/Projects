#include <iostream>
#include <locale>
using namespace std;

int calcularPotencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int base, expoente;

    cout << "Digite a base: ";
    cin >> base;

    cout << "Digite o expoente: ";
    cin >> expoente;
    
    int potencia = calcularPotencia(base, expoente);

    cout << base << " elevado a " << expoente << " é igual a " << potencia <<endl;

    return 0;
}

