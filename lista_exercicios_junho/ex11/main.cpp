#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int numero, unidade, dezena, centena;

	while(true){

		cout << "Informe um numero: ";
		cin >> numero;
		
		if(numero > 0 && numero < 1000){
			unidade = numero % 10;
			dezena = ((numero - unidade) / 10) % 10;
			centena = ((numero - unidade - dezena) / 100) % 100;


			if(centena > 1){
				cout << centena << " centenas, ";
			}else if(centena == 0){
				cout << "";
			}else{
				cout << centena << " centena, ";
			}
			
			if(dezena > 1){
				cout << dezena << " dezenas, ";
			}else if(dezena == 0){
				cout << " ";
			}else{
				cout << dezena << " dezena, ";
			}
			
			if(unidade > 1 && dezena == 0 && centena == 0){
				cout << unidade << " unidades" << endl;
			}else if(unidade == 1){
				cout << unidade << " unidade" << endl;
			}else if(unidade == 0){
				cout << "" << endl;
			}else{
				cout << "e " << unidade << " unidades" << endl;

			}
			
			
		}else{
			cout << "Numero precisa estar no intervalo entre 1 e 999.\n\n";
		}
	}
	
	system("pause");
	return 0;
}
