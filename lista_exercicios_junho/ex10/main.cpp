#include <iostream>
#include <locale.h>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int ano;
	
	
	cout << "DESCUBRA SE O ANO E BISSEXTO OU NAO\n";
	
	cout << "Informe o Ano: \n";
	cin >> ano;
	
	if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
		cout << "Ano bissexto.\n";
	}else{
		cout << "Não é bissexto.\n";
	}
	
	
	
	
	system("pause");
	return 0;
}
