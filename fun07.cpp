#include <iostream>
using namespace std;

float media(float n1, float n2){
	float m;
	m = (n1 + n2)/2;
	return m;
}

int main() {
	float nota1, nota2, mm;
	cout << "Valor nota 1 "; cin >> nota1;
	cout << "Valor nota 2 "; cin >> nota2;
	mm = media(nota1, nota2);
	cout << "media "<<mm<<endl;
	return 0;
}