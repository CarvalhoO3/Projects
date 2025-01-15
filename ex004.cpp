#include <iostream>
#include <iomanip>
 using namespace std;
int main () {  
setlocale(LC_ALL, "Portuguese");

int notax, notay, notaz, notau;

cout << "Coloque as notas dos 4 bimestres e descubra a média\n";
cout << "Primeira nota :";
cin >> notax;
cout << "Segunda nota :";
cin >> notay;
cout << "Terceira Nota :";
cin >> notaz;
cout << "Quarta nota :";
cin >> notau;
int resultado = (notaz + notax + notay + notau) /4; 
cout << "Essa é sua média : " << resultado << endl;

return 0;
} 
