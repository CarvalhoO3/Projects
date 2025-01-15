#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3;

    cout << "Digite o valor do primeiro produto: ";
    cin >> num1;
    cout << "Digite o valor do segundo produto: ";
    cin >> num2;
    cout << "Digite o valor do terceiro produto: ";
    cin >> num3;
    float menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    cout << "O produto com menor valor é: " << menor << ", aproveita que ta baratinho..." << endl;

    return 0;
}

