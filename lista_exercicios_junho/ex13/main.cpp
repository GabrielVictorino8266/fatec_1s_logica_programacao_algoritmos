#include <iostream>
#include <string.h>
 
using namespace std;


//validador de cpf

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int soma=0, resultado = 0, digito10, digito11, digito=0;
	char cpf[11];
	
	cout << "Informe o cpf (Sem espaços e pontos). \n\n";
	cin >> cpf;
	
	if(strlen(cpf) != 11){
		cout << "Cpf nao possui 11 numeros.\n";
		return 0;
	}else if(
			(strcmp(cpf,"00000000000") == 0) || (strcmp(cpf,"11111111111") == 0) || (strcmp(cpf,"22222222222") == 0) ||
            (strcmp(cpf,"33333333333") == 0) || (strcmp(cpf,"44444444444") == 0) || (strcmp(cpf,"55555555555") == 0) ||
            (strcmp(cpf,"66666666666") == 0) || (strcmp(cpf,"77777777777") == 0) || (strcmp(cpf,"88888888888") == 0) ||
            (strcmp(cpf,"99999999999") == 0)
	){
		cout << "Todos os numeros repetidos.\n\n";
		return 0;
	}else{


//digito verificador 1		
		for(int i = 0; i < 9; i++){
			digito = cpf[i]-'0';
//			cout << digito << endl;
			soma+= digito * (10 - i);
//			cout << soma << endl;
		}
		
		digito10 = (soma * 10) % 11;
		
		if(digito10 == 10 || digito10 == 11){
			digito10 = 0;
		}
		
		
//digito verificador 2
	soma = 0;
		for(int i = 0; i < 10; i++){
			digito = cpf[i]-'0';
//			cout << digito << endl;
			soma+= digito * (11 - i);
//			cout << soma << endl;
		}
		
		
		digito11 = (soma * 10) % 11;
		
		if(digito11 == 10 || digito11 == 11){
			digito10 = 0;
		}
		
		if(digito10 == cpf[9]-'0' && digito11 == cpf[10]-'0'){
			cout << "CPF VALIDO!" << endl;
			
		}else{
			cout << "CPF INVALIDO" << endl;
		}
	}
	

	return 0;
}
