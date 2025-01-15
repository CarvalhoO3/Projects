#include <iostream>
using namespace std;

bool ehPar (int num){
	int resto;
	resto = num % 2;
	if (resto == 0){
		return true;
	} else {
		return false;
	}
}


int main() {
	int n;
	cout << "Digite um numero inteiro ";cin >> n;
	if (ehPar(n)==true){
		cout << n << " eh par "<<endl;
	} else {
		cout << n << " eh impar "<<endl;
	}
}