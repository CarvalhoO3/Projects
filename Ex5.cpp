#include <iostream> 
#include <locale>
using namespace std;

float calcularDezPorCento(float valor) {
    return valor * 0.10; 
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    float valor;

   cout << "Digite um valor para calcular 10%: ";
	cin >> valor;

    float resultado = calcularDezPorCento(valor);

    cout << "10% de " << valor << " é: " << resultado << endl;

    return 0;
}

