#include <iostream>
#include <iomanip>
using namespace std;

int main() {  
    setlocale(LC_ALL, "Portuguese");

    int raio; 
	float resultado;
    cout << "Digite o valor do raio e descubra sua área: ";
    cin >> raio;
    resultado = (raio * raio) * 3,14;
    cout << "O valor da área é "<< resultado <<",utilizando pi como 3,14." << endl;
return 0;
}
