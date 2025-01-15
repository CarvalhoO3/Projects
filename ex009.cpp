#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float cel, fah, trans;
cout << "Quantos Farenheit está lá fora? ";
cin >> fah;
    trans = (5 * (fah-32) / 9);
    cout << "Lá fora está " << fah << " Farenheit e transformando para celsius está " << trans << " C" << endl;
    
    return 0;
}
