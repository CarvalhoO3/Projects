#include <iostream>
using namespace std;

void achaMaior(float a, float b){
	float maior;
	if (a>b) {maior = a;}
	else     {maior = b;}	
	cout << "Maior elemento "<<maior<<endl;
}

int main() {
	float nota1, nota2;
	cout << "Querida secretaria digite"<<
	" a primeira nota ";
	cin >> nota1;
	cout << "Agora digite a 2 nota ";
	cin >> nota2;
	achaMaior(nota1,nota2);
	return 0;
}