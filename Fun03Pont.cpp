#include <iostream>
using namespace std;

void soma(int v1, int v2, int* res) {
    *res = v1 + v2;
}
int main() {
    int resultado;
    cout << "2 + 3 = ";
    soma(2, 3, &resultado);
    cout << "Soma = " << resultado << endl;

    cout << "2 + 3 = " << 2 + 3 << endl;

    int v1, v2;
    cout << "Primeiro valor: "; cin >> v1;
    cout << "Segundo valor: "; cin >> v2;

    cout << v1 << " + " << v2 << " = ";
    soma(v1, v2, &resultado); 
    cout << "Soma = " << resultado << endl;

    return 0;
}

