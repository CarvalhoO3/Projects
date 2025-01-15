#include <locale>
#include <iostream>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

float excedente, peso, multa, excesso;
cout <<"Quantos kilos você pescou amigão :" ;
cin >> peso;

if (peso > 50)
{ excesso = peso - 50;
  multa = excesso * 4;
  cout << "Ultrapassou o limite ein, vai pagar "<< multa << " Reais" << endl;
  cout << "Você passou do limite por contas de " << excesso << " Kilos " << endl;
}

else 
{ 
cout << "Está tudo dentro dos limites, sem multa!"<< endl;
}
return 0;
}





