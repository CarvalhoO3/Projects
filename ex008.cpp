#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salario, horas, ganho;
    cout << "Quanto você ganha por hora?"  "R$";
    cin >> ganho;
    cout << "E quantas horas você trabalha?";
    cin >> horas;
    salario = ganho * horas;
    cout << "Nesse mês você irá ganhar " << salario << " R$"<< endl;
    
    return 0;
}
