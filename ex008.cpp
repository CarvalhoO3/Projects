#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salario, horas, ganho;
    cout << "Quanto voc� ganha por hora?"  "R$";
    cin >> ganho;
    cout << "E quantas horas voc� trabalha?";
    cin >> horas;
    salario = ganho * horas;
    cout << "Nesse m�s voc� ir� ganhar " << salario << " R$"<< endl;
    
    return 0;
}
