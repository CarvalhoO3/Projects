#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    char letra; 
    cout << "Digite M para Masculino ou F para Feminino: ";
    cin >> letra;
    if (letra == 'M' || letra == 'm') {
        cout << "Parab�ns, voc� acertou a letra M. Voc� � Masculino." << endl;
		       
    } else if (letra == 'F' || letra == 'f') 
	{
        cout << "Parab�ns, voc� acertou a letra F. Voc� � Feminino." << endl;
    } 
	else 
	{
     cout << "Sexo inv�lida. Tente novamente." << endl;
    }

    return 0;
}

