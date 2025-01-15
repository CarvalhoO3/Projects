#include <locale>
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3, num4, num5, resultado, media;

    cout << "Informe cinco números: ";   
cin >> num1 >> num2 >> num3 >> num4 >> num5;
resultado = num1 + num2 + num3 + num4 + num5;
cout << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << " = " << resultado;
media = resultado / 5;
cout << " \nA média é " << media << endl;
    
	return 0;
}

