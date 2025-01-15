#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    int inicio, fim;

    cout << "Digite o primeiro número: ";
    cin >> inicio;

    cout << "Digite o segundo número: ";
    cin >> fim;

    if (inicio > fim) {
    cout << "O primeiro número deve ser menor ou igual ao segundo número." << std::endl;
        return 1;
    }
    cout << "Números no intervalo [" << inicio << ", " << fim << "]:" << endl;
    for (int i = inicio; i <= fim; ++i) {
        cout << i << endl;
    }

    return 0;
}

