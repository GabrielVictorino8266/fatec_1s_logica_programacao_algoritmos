#include <iostream>
#include <vector>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	vector <int> vetor;
	int numero_a_inserir = 0;
	int MAIOR = 0;
	int MENOR = 0;
	float soma_total = 0.0;
	
	
	for(int i =0; i <= 10; i++){
		cout << "Informe um numero para adicionar: " << endl;
		cin >> numero_a_inserir;
		vetor.push_back(numero_a_inserir);
	}
	
	MENOR = vetor[0];
	
	cout << endl;
	cout << "Vetor Completo: " << endl;
	
	for(int i =1; i <= 10; i++){
		cout << vetor[i] << " ";
		soma_total +=  vetor[i];
		
		if (vetor[i] > MAIOR){
			MAIOR = vetor[i];
		}
		
		if (vetor[i] < MENOR){
			MENOR = vetor[i];
		}
	}
	
	cout << endl;
		
	cout << "Maior: " << MAIOR << endl;
	cout << "Menor: " << MENOR << endl;
	cout << "Média: " << soma_total / vetor.size() << endl;	
	cout << endl;
	
	
	system("pause");
	return 0;
}
