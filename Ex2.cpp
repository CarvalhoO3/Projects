#include <iostream> 
using namespace std;

int calcularAreaCirculo(int raio) {
    const float PI = 3.14159; // PI
    return (PI * raio * raio); 
}
int main() {
    int raio;

    cout << "Digite o raio do c�rculo: ";
    cin >> raio;

    int area = calcularAreaCirculo(raio);
    cout << "A �rea do c�rculo �: " << area << std::endl;

    return 0;
}

