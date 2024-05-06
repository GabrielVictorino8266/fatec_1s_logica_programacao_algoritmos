#include <iostream>
#include <vector>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	vector<int> vetor;	
	int valor_buscar;
	int i = 0;
	bool encontrado = false;
	
	vetor.push_back(5);
    vetor.push_back(10);
    vetor.push_back(4);
    vetor.push_back(15);
	
	cout << "O vetor possui os seguintes valores: \n";
	for(int i = 0; i < vetor.size();i++){
		cout << vetor[i] << " ";
	}
	
	cout << endl;
	
	
	cout << "Informe o valor que deseja buscar: \n";
	cin >> valor_buscar;
	
	
	for(int i = 0; i < vetor.size();i++){
		if(vetor[i] == valor_buscar){
			cout << "O vetor possui o valor procurado: " << vetor[i] << endl;
			encontrado = true;
		}else{
			cout << "Essa posicao do vetor nao corresponde ao valor especificado." << endl;
			encontrado == false;
		}
	}
	
	return 0;
}
