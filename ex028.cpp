#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
setlocale(LC_ALL, "Portuguese");
    string resposta;
    int totalSim = 0;

    cout << "Responda �s perguntas abaixo com 'sim' ou 'n�o':" << endl;

    cout << "Telefonou para a v�tima? ";
    cin >> resposta;
    if (resposta == "sim") {
        totalSim++;
    }

    cout << "Esteve no local do crime? ";
    cin >> resposta;
    if (resposta == "sim") {
        totalSim++;
    }

    cout << "Mora perto da v�tima? ";
    cin >> resposta;
    if (resposta == "sim") {
        totalSim++;
    }

    cout << "Devia para a v�tima? ";
    cin >> resposta;
    if (resposta == "sim") {
        totalSim++;
    }

    cout << "J� trabalhou com a v�tima? ";
    cin >> resposta;
    if (resposta == "sim") {
        totalSim++;
    }

    if (totalSim == 2) {
        cout << "Suspeita" << endl;
    } else if (totalSim >= 3 && totalSim <= 4) {
        cout << "C�mplice" << endl;
    } else if (totalSim == 5) {
        cout << "Assassino" << endl;
    } else {
        cout << "Inocente" << endl;
    }

    return 0;
}

