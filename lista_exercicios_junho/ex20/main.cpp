#include <iostream>
#include <string.h> // cstring

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int adicionar;
	char caracter = ' ';
	
	string txt="Algoritimo e Logica de Programacao";
	
	cout << "Lembre-se que caracter a != A\n\n";
	
	cout << "Informe a posicao do caracter a adicionar e qual o caracter a ser adicionado: \n";
	cin >> adicionar >> caracter;
	
	if(adicionar < txt.length() && adicionar >= 0) {
			txt = txt.insert(adicionar, 1, caracter);
		}else{
			cout << "Informe uma posicao valida.";
		}

	
	cout << "Nova string: " << txt << endl;	
	
	system("pause");
	return 0;
}

