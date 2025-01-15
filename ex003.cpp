#include <iostream>
#include <iomanip>

 using namespace std;

int main (){
int num1, num2;
setlocale(LC_ALL, "Portuguese");
	cout << "Coloque um número :";
	cin >> num1;
	cout << "coloque outro número e descubra a soma entre ambos :";
	cin >> num2;
int resultado = num1 + num2;
	cout << "O resultado é :"<<(resultado) << endl;
	
	return 0;
	
	
	
	
	
	
	
}
