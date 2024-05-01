#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char posicao_cpf[11], digito10, digito11;
	
	int soma=0, numero=0, i = 0, resultado=0;
	
	cout << "Informe seu cpf: (sem pontos e espacos) \n";
	cin >> posicao_cpf;
	
	cout << "CPF digitado: " << posicao_cpf << endl;
	
	for(i;i<9;i++){
		numero=posicao_cpf[i]-48;
		soma+= numero * (10-i);
	}
	resultado = 11 - (soma % 11);
	
	
	if((resultado == 10) || (resultado == 11)){
		digito10 = '0';
	}else{
		digito10 = resultado + 48;
	}
	
	
	//digito2
	
	soma = 0;
	for(i;i<10;i++){
		numero=posicao_cpf[i]-48;
		soma += numero * (11-i);
	}
	
	resultado = 11 - (soma % 11);	
	
	if((resultado == 10) || (resultado == 11)){
		digito11 = '0';
	}else{
		digito11 = resultado + 48;
	}
	
	if((posicao_cpf[9] == digito10) && (posicao_cpf[10]==digito11)){
		cout << "CPF Valido." << endl;
	}else{
		cout << "CPF INVALIDO" << endl;
	}
	
	
	return 0;
}
