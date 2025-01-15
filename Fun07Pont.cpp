#include <iostream>
using namespace std;

void media(float n1, float n2, float *m) {
    *m = (n1 + n2) / 2;
}

int main() {
    float nota1, nota2, mm;
    cout << "Valor nota 1: "; cin >> nota1;
    cout << "Valor nota 2: "; cin >> nota2;
    media(nota1, nota2, &mm);
    cout << "Media: " << mm << endl;
    return 0;
}

