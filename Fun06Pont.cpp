#include <iostream>
using namespace std;

void ehPar(int num, bool *resultado) {
    int resto = num % 2;
    *resultado = (resto == 0);
int main() {
    int n;
    bool resultado;
    cout << "Digite um numero inteiro: ";
    cin >> n;
    ehPar(n, &resultado); 

    if (resultado) {
        cout << n << " eh par" << endl;
    } else {
        cout << n << " eh impar" << endl;
    }

    return 0;
}

