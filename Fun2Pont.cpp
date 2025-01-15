#include <iostream>
using namespace std;

void nada(int* aa) {
    cout << "Valor de A dentro de nada: " << *aa << endl;
}
int main() {
    int a = 2;
    cout << "Valor de A dentro de main: " << a << endl;
    
    int b = 5;
    int c = -1;
    nada(&b);
    nada(&c);
    nada(&a);

    return 0;
}

