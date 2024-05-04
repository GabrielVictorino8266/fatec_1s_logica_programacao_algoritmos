#include <iostream>
#include <math.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	unsigned long long int total;
	unsigned long long int qtde_atual;	
	int MAX_QUADROS = 64;
	
	for(int i = 1; i <= MAX_QUADROS; i++){
		qtde_atual = pow(2, i - 1); //Observa-se que o dobro (2) a cada quadro (i)
		total += qtde_atual;
		cout << "QUADRO: " << i << " GRAOS: " << qtde_atual << endl;
	}
	
	cout << "TOTAL: "<< total << endl;
	return 0;
}
