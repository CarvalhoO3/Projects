#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float cel, fah, trans;
cout << "Quantos Farenheit est� l� fora? ";
cin >> fah;
    trans = (5 * (fah-32) / 9);
    cout << "L� fora est� " << fah << " Farenheit e transformando para celsius est� " << trans << " C" << endl;
    
    return 0;
}
