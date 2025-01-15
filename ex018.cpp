#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    char letra;
    int vogal = 0, consoante = 0;

    cout << "Digite uma letra: ";
    cin >> letra;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        cout << "A letra digitada é uma vogal." << endl;
    }
    else if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        cout << "A letra digitada é uma consoante." << endl;
    }
    else {
        cout << "Você não digitou uma letra." << endl;
    }

    return 0;
}

