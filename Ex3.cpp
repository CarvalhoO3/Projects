#include <iostream>
using namespace std;
#include <locale>

float calcularConsumoMedio(float quilometros, float litros) {
    return quilometros / litros; 
}
int main() {
	setlocale(LC_ALL, "Portuguese");
    float quilometros, litros;

    cout << "Digite a quantidade de quil�metros percorridos: ";
    cin >> quilometros;
    
	cout << "Digite a quantidade de litros gastos: ";
    cin >> litros;

    float consumoMedio = calcularConsumoMedio(quilometros, litros);

    cout << "O consumo m�dio do ve�culo �: " << consumoMedio << " km/l" << endl;

    return 0; 
}

