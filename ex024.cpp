#include <iostream>]
#include <locale>
using namespace std;

int main () {

setlocale(LC_ALL, "Portuguese");
char  resultado;

cout << "Qual hor�rio voc� estuda? M - Matutino  V - Vespertino  N - Noturno:  ";
cin >> resultado;

if (resultado == 'M' || resultado == 'm')
{
cout << "Voc� estuda no hor�rio matutino!!"<< endl;
}
else if (resultado == 'V' || resultado == 'v')
{
cout << "Voc� estuda no hor�rio vespertino!!" << endl;
}
else if (resultado == 'N' || resultado == 'n')
{
cout << "Voc� estuda no hor�rio noturno!!" << endl;
}
else 
{
cout << "Op��o Inv�lida!!" << endl;
}

return 0;
}
