#include <iostream>]
#include <locale>
using namespace std;

int main () {

setlocale(LC_ALL, "Portuguese");

char resultado;

cout << "digite um n�mero e descubra o dia da semana: ";
cin >> resultado;

if (resultado == '1')
{
	cout << "Hoje � Domingo!" << endl;
}
else if (resultado == '2')
{
	cout << "Hoje � Segunda!" << endl;
}
else if (resultado == '3')
{
	cout << "Hoje � Ter�a!" << endl;
}
else if (resultado == '4')
{
	cout << "Hoje � Quarta!" << endl;
}
else if (resultado == '5')
{
	cout << "Hoje � QUinta!" << endl;
}
else if (resultado == '6')
{
	cout << "Hoje � Sexta!" << endl;
}
else if (resultado == '7')
{
	cout << "Hoje � S�bado!" << endl;
}
else
{
	cout << "Op��o Inv�lida, tente novamente..." << endl;
}

return 0;
}
