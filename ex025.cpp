#include <iostream>]
#include <locale>
using namespace std;

int main () {

setlocale(LC_ALL, "Portuguese");

char resultado;

cout << "digite um número e descubra o dia da semana: ";
cin >> resultado;

if (resultado == '1')
{
	cout << "Hoje é Domingo!" << endl;
}
else if (resultado == '2')
{
	cout << "Hoje é Segunda!" << endl;
}
else if (resultado == '3')
{
	cout << "Hoje é Terça!" << endl;
}
else if (resultado == '4')
{
	cout << "Hoje é Quarta!" << endl;
}
else if (resultado == '5')
{
	cout << "Hoje é QUinta!" << endl;
}
else if (resultado == '6')
{
	cout << "Hoje é Sexta!" << endl;
}
else if (resultado == '7')
{
	cout << "Hoje é Sábado!" << endl;
}
else
{
	cout << "Opção Inválida, tente novamente..." << endl;
}

return 0;
}
