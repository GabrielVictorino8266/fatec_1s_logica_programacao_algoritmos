#include <iostream>
#include <vector>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector <int> vetor;
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
	int valor_referencia;
	int contador=0;
	
	cout << "Informe 10 numeros inteiros\n";
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;
	
	vetor.push_back(n1);
	vetor.push_back(n2);
	vetor.push_back(n3);
	vetor.push_back(n4);
	vetor.push_back(n5);	
	vetor.push_back(n6);
	vetor.push_back(n7);
	vetor.push_back(n8);
	vetor.push_back(n9);
	vetor.push_back(n10);
		
		
	cout << "\n";
	
	//exibe vetor completo
	cout << "Vetor completo.\n";
	
	for(int i = 0; i < 10; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
		
	cout << "Informe um valor de referencia.\n";
	cin >> valor_referencia;
	
	
	for(int i = 0; i < 10;i++){
		if(vetor[i] > valor_referencia){
			cout << valor_referencia << " e menor que " << vetor[i] << endl;
		}
	}
	
	//menor que
	for(int i = 0; i < 10;i++){
		if(vetor[i] < valor_referencia){
			cout << valor_referencia << " e maior que " << vetor[i] << endl;
		}
	}
	
	//quantas vezes aparece no vetor	
	for(int i = 0; i < 10;i++){
		if(vetor[i] == valor_referencia){
			contador++;
		}
	}
	
	cout << "O valor " << valor_referencia << " aparece " << contador << "vezes no vetor.\n";
	
	return 0;
}
