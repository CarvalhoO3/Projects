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
 cout << valor << " � um n�mero negativo." << endl;
}
else if (valor > 0 )
{
cout << valor << " � um n�mero positivo." << endl;
}
else 
cout << "valor inv�lido, tente novamente..." << endl;

return 0;
 }

