#include <iostream>
using namespace std;

void nada(int aa) {
	
	cout << "Valor de A dentro de nada "<< aa<< endl;
}

int main() {
	int a = 2;
	cout << "Valor de A dentro de main "<< a<< endl;
	nada(5);
	nada(-1);
	nada(a);
	return 0;
}//fim  main