#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int inicio, fim;

    cout << "Digite o primeiro n�mero: ";
    cin >> inicio;

    cout << "Digite o segundo n�mero: ";
    cin >> fim;

    if (inicio > fim) {
    cout << "O primeiro n�mero deve ser menor ou igual ao segundo n�mero." << std::endl;
        return 1;
    }
    cout << "N�meros no intervalo [" << inicio << ", " << fim << "]:" << endl;
    for (int i = inicio; i <= fim; ++i) {
        cout << i << endl;
    }

    return 0;
}

