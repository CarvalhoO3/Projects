#include <iostream>
#include <iomanip>

 using namespace std;

int main (){
int num1, num2;
setlocale(LC_ALL, "Portuguese");
	cout << "Coloque um n�mero :";
	cin >> num1;
	cout << "coloque outro n�mero e descubra a soma entre ambos :";
	cin >> num2;
int resultado = num1 + num2;
	cout << "O resultado � :"<<(resultado) << endl;
	
	return 0;
	
	
	
	
	
	
	
}
