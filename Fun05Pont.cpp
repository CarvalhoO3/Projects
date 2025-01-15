#include <iostream>
using namespace std;

void achaMaior(float a, float b, float *maior) {
	if (a > b) {
		*maior = a;
	} else {
		*maior = b;
	}
}
int main() {
	float nota1, nota2, maior;
	cout << "Querida secretaria, digite a primeira nota: ";
	cin >> nota1;
	cout << "Agora digite a segunda nota: ";
	cin >> nota2;
	
	achaMaior(nota1, nota2, &maior);
	cout << "Maior elemento: " << maior << endl;

	return 0;
}

