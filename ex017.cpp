#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    char letra; 
    cout << "Digite M para Masculino ou F para Feminino: ";
    cin >> letra;
    if (letra == 'M' || letra == 'm') {
        cout << "Parabéns, você acertou a letra M. Você é Masculino." << endl;
		       
    } else if (letra == 'F' || letra == 'f') 
	{
        cout << "Parabéns, você acertou a letra F. Você é Feminino." << endl;
    } 
	else 
	{
     cout << "Sexo inválida. Tente novamente." << endl;
    }

    return 0;
}

