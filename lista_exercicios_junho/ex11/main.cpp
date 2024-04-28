#include <iostream>
#include <sstream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int verificaCasasNumero(string numero_texto, numero){
	
	stringstream n(numero_texto);
    n >> numero;
    
    cout << length(numero_texto);
	
//	for(int i; i <= lenght(numero_texto); i++){
//		cout << 
//	}
}


int main(int argc, char** argv) {
	int numero;
	string numero_texto;
		
	cout << "Informe um numero: ";
	cin >> numero_texto;
	
    stringstream n(numero_texto);
    n >> numero;
    
	
	if(numero > 0 && numero < 1000){
		cout << "Centenas: " << verificaCasasNumero(numero_texto, numero) << endl;
	}else{
		cout << "Numero invalido, reinicie o programa.";
	}
	
	return 0;
}
