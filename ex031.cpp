#include <locale>
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3, num4, num5;

    cout << "Informe cinco números: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    float maior = num1;

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) {
        maior = num3;
    }

    if (num4 > maior) {
        maior = num4;
    }

    if (num5 > maior) {
        maior = num5;
    }

    cout << "O maior número é " << maior << endl;

    return 0;
}

