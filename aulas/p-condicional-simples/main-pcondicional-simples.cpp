#include <iostream>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, ""); // permite acentua��o.
	
	int i;
	int numMax;
	
	cout << "Informe um numero m�ximo: \r\n";
	cin >> numMax;
	
	cout << "Informe um numero: \r\n";
	cin >> i;
	
	//condicional simples
	if (i >= numMax) {
		
	cout << "O numero: " << i << " � maior/igual que o n�mero m�ximo "<< numMax << "\r\n";
	}
	
	
	
	
	
	
	system("pause");
	
	return 0;
}
