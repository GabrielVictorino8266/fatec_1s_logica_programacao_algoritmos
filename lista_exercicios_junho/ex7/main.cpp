#include <iostream>
#include <locale.h> //usada para idioma pt-br
#include <algorithm> // Para a função sort


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	
	int numero_um, numero_dois, numero_tres;
	
	cout << "Programa de Ordem Decrescente." << endl;
	
	cout << "Informe APENAS numeros INTEIROS DIFERENTES\n";
	
	cout << "Informe o numero 1: \n";
	cin >> numero_um;
	
	cout << "Informe o numero 2: \n";
	cin >> numero_dois;
	
	cout << "informe o numero 3: \n";
	cin >> numero_tres;
	
	if(numero_um > numero_dois && numero_um > numero_tres){
		if(numero_dois > numero_tres){
			cout << "numero_um" << " - " << "numero_dois" << " - " << "numero_tres";
		}else{
			cout << "numero_um" << " - " << "numero_tres" << " - " << "numero_dois";
		}
	}else if(numero_dois > numero_um && numero_dois > numero_tres){
		if(numero_um > numero_tres){
			cout << "numero_dois" << " - " << "numero_um" << " - " << "numero_tres";
		}else{
			cout << "numero_dois" << " - " << "numero_tres" << " - " << "numero_um";
		}
	}else if(numero_tres > numero_dois && numero_tres > numero_um){
		if(numero_dois > numero_um){
			cout << "numero_tres" << " - " << "numero_dois" << " - " << "numero_um";
		}else{
			cout << "numero_tres" << " - " << "numero_um" << " - " << "numero_dois";
		}
	}else{
		cout << "São inteiros iguais. ou pelo menos um dos números é igual ao outro.";
	}
	
	/*	
	numeros[] = {numero_um, numero_dois, numero_tres};
	sort(numeros, numeros + 3, greater<int>()); //serve para ordem decrescente
	sort(numeros, numeros + 3; //serve para ordem crescente

	cout << numeros[0] << numeros[1] << numeros[3] << endl;
	*/
		
	system("pause");
	return 0;
}
