#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double tamanho_download=0.0, mbps=0.0, tempo=0.0;
	// 1 Megabyte (MB) é igual a 8 megabits (Mbps)
	
	cout << "***********Estimativa de Download***********" << endl;
	
	cout << "Tamanho download (MB): \n";
	cin >> tamanho_download;
	
	cout << "Velocidade de Download: \n";
	cin >> mbps;
	
	tempo = tamanho_download / (mbps / 8);
	
	cout << "O tempo sera de " << tempo << "s. Ou " << tempo / 60 << " minutos  (APROXIMADAMENTE)";
	
	return 0;
}
