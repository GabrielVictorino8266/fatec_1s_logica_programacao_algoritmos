#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int valor_saque=0.0;
	int nota_um=0, nota_cinco=0, nota_dez=0, nota_cinquenta=0, nota_cem=0;
	int MAX_SAQUE = 600, MIN_SAQUE=10;
	
	cout << "Ex12 - Caixa Eletronico" << endl;
	
	cout << "Informe o valor do saque: " << endl;
	cin >> valor_saque;
	cout << endl;
	
	if(valor_saque <= MAX_SAQUE && valor_saque >= 10){
		nota_um = valor_saque % 10; // calcula qtde notas 1
		nota_dez = ((valor_saque - nota_um) / 10) % 10; // calcula qtde notas de 10
		nota_cem = ((valor_saque - nota_dez - nota_um) / 100) % 10;
		
		if(nota_um >= 5){//calcula qtde notas 5 e corrige qtde notas 1
			nota_um-= 5;
			nota_cinco++;
		}
		
		if(nota_dez >= 5){//substitui 5 notas de 10 por uma de 50
			nota_dez-= 5;
			nota_cinquenta++;
		}
	
		
		cout << "Nota(s) de R$1,00: " << nota_um << endl;
		cout << "Nota(s) de R$5,00: " << nota_cinco << endl;
		cout << "Nota(s) de R$10,00: " << nota_dez << endl;
		cout << "Nota(s) de R$50,00: " << nota_cinquenta << endl;
		cout << "Nota(s) de R$100,00: " << nota_cem << endl;	
	}else{
		cout << "Fique atento aos valores maximos e minimos para saque.\n";
	}

	
	
	system("pause");
	return 0;
}
