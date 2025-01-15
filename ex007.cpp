#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float lado, area, dobro;
    cout << "Quanto vale cada lado do seu quadrado?";
    cin >> lado;
    area = lado * lado;
    dobro = area * 2;
    cout << "A Area total é " << area << " e o seu dobro é " << dobro << endl;

return 0;
}
