#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float valor, resultado;
    cout << "Digite um valor qualquer: ";
    cin >> valor;
    
if (valor < 0)
{ 
 cout << valor << " é um número negativo." << endl;
}
else if (valor > 0 )
{
cout << valor << " é um número positivo." << endl;
}
else 
cout << "valor inválido, tente novamente..." << endl;

return 0;
 }

