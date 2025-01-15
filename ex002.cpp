#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num1;
    cout << "Coloque um número: ";
    cin >> num1; 
    cout << "Seu número foi: " << num1 << endl; 
    return 0;
}

