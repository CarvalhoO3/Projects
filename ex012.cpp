#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int genero;
    float altura, pesoidealh, pesoidealm;
    
    cout << "Voc� � homem (1) ou mulher(2)?";
    cin >> genero;
    cout << "E qual sua altura? ";
    cin >> altura;
    pesoidealh = (72.7 * altura) - 58;
    pesoidealm = (62.1 * altura) - 44.7;
    
if (genero == 1)
{
cout << "Seu peso ideal baseado na sua altura � " << pesoidealh << "quilos" << endl;
}
else if  (genero == 2)
{
cout << "Seu peso ideal baseado na sua altura e no seu genero" << genero << "� de" << pesoidealm << "quilos" << endl;
}
else 
 cout << "Resultado inv�lido, fa�a o programa novamente e coloque algo v�lido"<< endl;
 
 return 0;
}

