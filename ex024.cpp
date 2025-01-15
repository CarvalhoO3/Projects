#include <iostream>]
#include <locale>
using namespace std;

int main () {

setlocale(LC_ALL, "Portuguese");
char  resultado;

cout << "Qual horário você estuda? M - Matutino  V - Vespertino  N - Noturno:  ";
cin >> resultado;

if (resultado == 'M' || resultado == 'm')
{
cout << "Você estuda no horário matutino!!"<< endl;
}
else if (resultado == 'V' || resultado == 'v')
{
cout << "Você estuda no horário vespertino!!" << endl;
}
else if (resultado == 'N' || resultado == 'n')
{
cout << "Você estuda no horário noturno!!" << endl;
}
else 
{
cout << "Opção Inválida!!" << endl;
}

return 0;
}
