#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcao = 1;
	double p1,p2,p3, pagamento, total, troco;
	
	
	while(opcao != 0){
		"SAIR - 0\n CONTINUAR - 1\n\n";
		
		cout << "Loja Tabajara: " << endl;
		cout << "Informe o valor dos 3 produtos que comprou: " << endl;
		cin >> p1 >> p2 >> p3;
		
		total = p1 + p2 + p3;
		cout << "Total: R$" << total << endl;;
		cout << "Informe seu pagamento: " << endl;
		cin >> pagamento;
		if(pagamento < total){
			cout << "Insira novamente o valor: " << endl;
			cin >> pagamento;
		}else{
			troco = pagamento - total;
			cout << "Seu troco será R$ " << troco << endl;
			cout << "Deseja continuar? SAIR - 0\n CONTINUAR - 1\n\n";
			cin >> opcao;
		}
	}
	
	return 0;
}
