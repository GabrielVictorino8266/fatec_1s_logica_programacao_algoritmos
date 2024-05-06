#include <iostream>
#include <vector>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	vector <int> vetor;
	int inserir_numero = 0;	
	bool numero_validado = true;
	int indice_vetor, indices_anteriores;
/*	
	vetor.push_back(1);
	vetor.push_back(2);
	vetor.push_back(3);
	vetor.push_back(4);
	vetor.push_back(5);	
	vetor.push_back(6);
	vetor.push_back(7);
	vetor.push_back(8);
	vetor.push_back(9);
	vetor.push_back(10);
*/
		
	for(indice_vetor =0;indice_vetor<10;indice_vetor++){
		cout << "Informa numero: \n";
		cin >> inserir_numero;
		
		for(indices_anteriores = 0; indices_anteriores < indice_vetor;indices_anteriores++){
			if(inserir_numero == vetor[indices_anteriores]){
				numero_validado = false;
				cout << "Numero reptido;\n";
				indice_vetor--;
				break;
			}
		}
		
		if(numero_validado == true){
			vetor.push_back(inserir_numero);
		}else{
			numero_validado = true; // ele ativa o true para poder repetir o for e revalidar o novo numero
		}

	}
	
	cout << "Vetor completo: " << endl;
	
	for(indice_vetor = 0; indice_vetor < 10;indice_vetor++){
		cout << vetor[indice_vetor] << " ";
	}
	
	
	return 0;
}
