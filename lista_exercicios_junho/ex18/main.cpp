#include <iostream>


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcao = 8; //1234
	int total_c1=0, total_c2=0, total_c3=0, total_c4=0, total_vb=0, total_vn=0, total_geral=0;
	double p_vn =0.00, p_vb=0.00;
	
	while(opcao != 0){
		cout << "|----------------------------MENU------------------------|\n";
		cout << "|CANDIDATO: 1--------------------------------------------|\n";
		cout << "|CANDIDATO: 2--------------------------------------------|\n";
		cout << "|CANDIDATO: 3--------------------------------------------|\n";
		cout << "|CANDIDATO: 4--------------------------------------------|\n";
		cout << "|VOTO NULO: 5--------------------------------------------|\n";
		cout << "|VOTO BRANCO: 6------------------------------------------|\n";
		cout << "|VER RESULTADOS(SAIR) - 0    ----------------------------|\n";
		cout << "|--------------------------------------------------------|\n";
		
		cout << "\n\n";
		cout << ">> ";
		cin >> opcao;
	
		switch(opcao){
			case 1:
				total_c1++;
				break;
			case 2:
				total_c2++;
				break;
			case 3:
				total_c3++;
				break;
			case 4:
				total_c4++;
				break;
			case 5:
				total_vb++;
				break;
			case 6:
				total_vn++;
				break;
		}
		

	}
	cout << "\n\n\n";
	total_geral = total_c1 + total_c2 + total_c3 + total_c4 + total_vn + total_vb;	
	
	p_vb = (total_vb / float(total_geral) * 100.00);
	p_vn = (total_vn / float(total_geral) * 100.00);
	
	cout << "BRANCOS  " << p_vb << "%\n";
	cout << "NULOS  " << p_vn << "%\n";
	system("pause");
	return 0;
}
