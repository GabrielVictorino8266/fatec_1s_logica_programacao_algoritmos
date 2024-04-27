#include <iostream>
#include <locale.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	double peso, multa, excesso_max;
	peso = 0;
	multa = 0;
	excesso_max = 50.00;
	
	
	cout << "***********************************RENDIMENTO DE TRABALHO***********************************\r\n\r\n";
	
	cout << "Informe o Peso dos Peixes: \r\n\r\n";
	cin >> peso;
	
	if(peso > excesso_max) {
		multa = ((peso - excesso_max) * 4.00);
		
		cout << "Existe um excesso de " << peso - excesso_max << "Kg.\r\n";
		cout << "Você deve pagar R$ " << multa << "\r\n";
		
	} else {
		multa = 0.00;
		cout << "Não há excesso de Peso, TUDO OK.\r\n";
		cout << "Multa R$ " << multa << "\r\n";
	}
	
	return 0;
}
