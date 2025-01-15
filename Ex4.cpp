#include <iostream> 
#include <locale>
using namespace std;

int Cubo(int numero) {
    return numero * numero * numero;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero;

    cout << "Digite um número para elevar ao cubo: ";
    cin >> numero;

    int resultado = Cubo(numero);

    cout << "O resultado de " << numero << " elevado ao cubo é: " << resultado <<endl;

    return 0;
}

