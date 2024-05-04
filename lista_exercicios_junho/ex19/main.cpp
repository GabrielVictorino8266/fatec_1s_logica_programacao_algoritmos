//#include <iostream>
//#include <string.h> // cstring
//
//using namespace std;
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int main(int argc, char** argv) {
//	
//	char txt[100]="Algoritimo e Logica de Programacao";
//	char txt2[100] = "";
//	char txt3[100] = "";
//
//	strcpy(txt2, txt);
//	strncpy(txt3, txt, 3);// o numero indica a qtde de caracteres.
//	
//	cout << txt2 << endl;
//	cout << txt3 << endl;
//	
//	strcat(txt, " - teste");
//	strncat(txt, " - teste");
//	cout << txt;
//	return 0;
//}

#include <iostream>
#include <string.h> // cstring

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int remover;
	
	string txt="Algoritimo e Logica de Programacao";
	
	cout << "Lembre-se que caracter a != A\n\n";
	
	cout << "Informe a posicao do caracter a remover: \n";
	cin >> remover;
	
	if(remover < txt.length() && remover >= 0) {
			txt = txt.erase(remover, 1);
		}else{
			cout << "Informe uma posicao valida.";
		}

	
	cout << "Nova string: " << txt << endl;	
	
	system("pause");
	return 0;
}
