#include <iostream>
#include <locale>
using namespace std;

int main() {
setlocale(LC_ALL, "Portuguese");
 
    int numero;
    int pares = 0, impares = 0;

    cout << "Digite 10 números inteiros:\n";

    for (int i = 0; i < 10; ++i) {
        cin >> numero;

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Quantidade de números pares: " << pares << endl;
    cout << "Quantidade de números ímpares: " << impares << endl;

    return 0;
}

