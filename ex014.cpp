#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    int coberturaPorLitro = 3;
    int capacidadeLata = 18;
    float precoLata = 80.00;

    float areaASerPintada;
    cout << "Digite o tamanho em metros quadrados da �rea a ser pintada: ";
    cin >> areaASerPintada;

    float litrosNecessarios = areaASerPintada / coberturaPorLitro;
    int latasNecessarias = litrosNecessarios / capacidadeLata;
    if (litrosNecessarios > latasNecessarias * capacidadeLata) {
        latasNecessarias ++;
    }
    float precoTotal = latasNecessarias * precoLata;

    cout << "\nQuantidade de latas necess�rias: " << latasNecessarias << endl;
    cout << "Pre�o total: R$ " << precoTotal << endl;

    return 0;
}
