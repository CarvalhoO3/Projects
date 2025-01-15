#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float altura, pesoideal;
    cout << "Entre com sua altura(em metros) e descubra seu peso ideal: ";
    cin >> altura;
     pesoideal = (72.7 * altura) - 58;
     cout << "seu peso ideal é " << pesoideal << " quilogramas" << endl;
     
     return 0;
 }
