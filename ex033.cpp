#include <locale>
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
     cout << "Números ímpares entre 1 e 50:" << endl;
    
    for (int i = 1; i <= 50; i += 2) {
        cout << i << endl;
    }
    return 0;
}
