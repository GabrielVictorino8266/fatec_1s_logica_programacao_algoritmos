#include <iostream>
#include <vector>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	vector <float> vetor;
	float numero_inserir = 0;
	int quantidade_negativos = 0;
	float soma_total_num_positivos = 0;
	
	
	for(int i = 0; i <= 9;i++){
		cout << "Informe o " << i+1 << " número: " << endl;
		cin >> numero_inserir;
		vetor.push_back(numero_inserir);
	}
	
	cout << "Vetor finalizado: " << endl;
	
	//exibindo o vetor
	for(int n = 0; n <= vetor.size()-1;n++){
		cout << vetor[n] << " ";
	}
	
	//contabilizando negativos
	for(int i = 0; i <= vetor.size(); i++){
		if(vetor[i] < 0){
			quantidade_negativos++;
		}else{
			soma_total_num_positivos+= vetor[i];
		}
	}
	
	cout << "\n\n";
	
	cout << "Soma total de Positivos: " << soma_total_num_positivos << endl;
	cout << "Quantidade de Negativos: " << quantidade_negativos << endl;
	
	system("pause");
	return 0;
}
