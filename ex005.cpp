#include <iostream>
#include <iomanip>
using namespace std;

int main () {
		setlocale(LC_ALL, "Portuguese");
int metros, cent, mm;
	cout <<	"Digite um valor em metros e descubra quanto ele vale em centímetros :";
	cin >> metros;
mm = metros * 100;
	cout << metros << " metros" << " equivale a "<< mm<< " centímetros";
return 0;
	
	
	
	
	
	
}

