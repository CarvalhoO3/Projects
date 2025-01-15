#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
setlocale(LC_ALL, "Portuguese");
    string resposta;
    int totalSim = 0;

    cout << "Responda às perguntas abaixo com 'sim' ou 'não':" << endl;

    cout << "Telefonou para a vítima? ";
    cin >> resposta;
    if (resposta == "sim") {
        totalSim++;
    }

    cout << "Esteve no local do crime? ";
    cin >> resposta;
    if (resposta == "sim") {
        totalSim++;
    }

    cout << "Mora perto da vítima? ";
    cin >> resposta;
    if (resposta == "sim") {
        totalSim++;
    }

    cout << "Devia para a vítima? ";
    cin >> resposta;
    if (resposta == "sim") {
        totalSim++;
    }

    cout << "Já trabalhou com a vítima? ";
    cin >> resposta;
    if (resposta == "sim") {
        totalSim++;
    }

    if (totalSim == 2) {
        cout << "Suspeita" << endl;
    } else if (totalSim >= 3 && totalSim <= 4) {
        cout << "Cúmplice" << endl;
    } else if (totalSim == 5) {
        cout << "Assassino" << endl;
    } else {
        cout << "Inocente" << endl;
    }

    return 0;
}

