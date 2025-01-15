#include <iostream>
using namespace std;

float achaMaior(float a, float b){
	float maior;
	if (a>b) {maior = a;}
	else     {maior = b;}	
	return maior;
}

int main() {
	float nota1, nota2;
	cout << "Querida secretaria digite"<<
	" a primeira nota ";
	cin >> nota1;
	cout << "Agora digite a 2 nota ";
	cin >> nota2;
	float notaMaior;
	notaMaior = achaMaior(nota1,nota2);
	cout << "Maior elemento "<<notaMaior<<endl;
	return 0;
}