#include <iostream> 
#include <locale>
using namespace std;

int Cubo(int numero) {
    return numero * numero * numero;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int numero;

    cout << "Digite um n�mero para elevar ao cubo: ";
    cin >> numero;

    int resultado = Cubo(numero);

    cout << "O resultado de " << numero << " elevado ao cubo �: " << resultado <<endl;

    return 0;
}

