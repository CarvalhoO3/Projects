#include <iostream>]
#include <locale>
using namespace std;

int main () {

setlocale(LC_ALL, "Portuguese");
    int numero, centenas, dezenas, unidades;
    cout << "Digite um número inteiro maior que 0 e menor que 1000: ";
    cin >> numero;
    if(numero <= 0 || numero >= 1000) {
        cout << "Número inválido. Por favor, digite um número entre 1 e 999." << endl;
        return 1; // Retorna 1 para indicar um erro
    }
    centenas = numero / 100;
    dezenas = (numero % 100) / 10;
    unidades = numero % 10;
    
    cout << "Centenas: " << centenas;
    if(centenas > 1)
        cout << " centenas, ";
    else
        cout << " centena, ";

    cout << "Dezenas: " << dezenas;
    if(dezenas > 1)
        cout << " dezenas, ";
    else
        cout << " dezena, ";

    cout << "Unidades: " << unidades;
    if(unidades > 1)
        cout << " unidades." << endl;
    else
        cout << " unidade." << endl;

    return 0;
}

