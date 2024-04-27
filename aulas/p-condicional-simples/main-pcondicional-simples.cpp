#include <iostream>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, ""); // permite acentuação.
	
	int i;
	int numMax;
	
	cout << "Informe um numero máximo: \r\n";
	cin >> numMax;
	
	cout << "Informe um numero: \r\n";
	cin >> i;
	
	//condicional simples
	if (i >= numMax) {
		
	cout << "O numero: " << i << " é maior/igual que o número máximo "<< numMax << "\r\n";
	}
	
	
	
	
	
	
	system("pause");
	
	return 0;
}
