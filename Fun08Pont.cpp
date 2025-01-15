#include <iostream>
using namespace std;

void ehPar(int num, bool *resultado) {
    *resultado = (num % 2 == 0);
}

int main() {
    int n;
    bool paridade;
    cout << "Digite um numero inteiro: "; cin >> n;
    ehPar(n, &paridade);
    if (paridade) {
        cout << n << " eh par" << endl;
    } else {
        cout << n << " eh impar" << endl;
    }
    return 0;
}

