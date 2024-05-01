#include <iostream>
#include <stdlib.h>
 
using namespace std;


//validador de cpf

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11; 
	int soma=0, resto=0;
	bool dv_1 = false, dv_2 = false;

	
	cout << "Informe seu cpf (sem pontos.)" << endl;
	cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8 >> d9 >> d10 >> d11;
	

	

	
	
	if((d1 == d2) && (d2 == 3) && (d3 == d4) && (d4 == d5) && (d5 == d6) && (d6 == d7) && (d7 == d8) && (d8 == d9) && (d9 == 10) && (d10 == d11)){
		cout << "****************************************CPF INVALIDO****************************************" << endl;
	}else{
		//primeiro digito
		soma = d1 * 10 + d2 * 9 + d3 * 8 + d4 * 7 + d5 * 6 + d6 * 5 + d7 * 4 + d8 * 3 + d9 * 2;
		
		resto = soma*10 % 11;
		cout << "Primeiro digito: " << resto << endl;
		
		if(d10 == resto){
			dv_1 = true;
		}		
			

			//segundo digito
			soma = 0;
			soma = d1 * 11 + d2 * 10 + d3 * 9 + d4 * 8 + d5 * 7 + d6 * 6 + d7 * 5 + d8 * 4 + d9 * 3 + d10 * 2;
			
			resto = soma*10 % 11;
			cout << "Segundo digito: " << resto << endl;
			
	
			if(d11 == resto){
				dv_2 = true;
			}			
				
		if(dv_1 == true && dv_2 == true){
			cout << "CPF VALIDO" << endl;
		}else{
			cout << "CPF INVALIDO" << endl;
		}
	}
	

	

	
	return 0;
}
