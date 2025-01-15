#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;
    cout << "Digite sua primeira nota: ";
    cin >> nota1;
    cout << "Digite sua segunda nota: ";
    cin >> nota2;
    media = (nota1 + nota2) / 2;
    
    if (media >= 7)
    {
	cout << "Aprovado!!" << endl;
}   
    else if (media < 7)
  {
  	cout << "Reprovado!!" << endl;
	}  
    else (media == 10);
    {
	cout << "Aprovado com Distinção!!!" << endl;
}
    return 0;
}
