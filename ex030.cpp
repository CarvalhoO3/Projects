#include <iostream>
#include <locale>
using namespace std;
int main() {
   setlocale(LC_ALL, "Portuguese");
 cout << "Pressione Enter para imprimir os n�meros um abaixo do outro ou qualquer outra tecla para imprimir um ao lado do outro." <<endl;
  system("pause > nul"); 
cout << "N�meros um abaixo do outro:" << endl;
    for (int i = 1; i <= 20; ++i) {
        cout << i << endl;
    }
cout << "Pressione qualquer tecla para imprimir os n�meros um ao lado do outro." <<endl;
system("pause > nul"); 
cout << "N�meros um ao lado do outro:" <<endl;
    for (int i = 1; i <= 20; ++i) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
