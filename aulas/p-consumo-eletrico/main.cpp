#include <iostream>
#include <locale.h>


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"");
	
	string codRelogio, nomeCliente;
	int leituraAnterior, leituraAtual, tipoLigacao, consumo;
	double valorFinal;
	
	/*
	Tipo ligacao:
	1 - Residencial
	2 - Comercio
	3 - Industrial
	*/
	
	cout << "Informe seu nome: \r\n";
	cin >> nomeCliente;
	
	cout << "Informe o cód. do relógio: ";
	cin >> codRelogio;
	
	cout << "Informe a leitura anterior: ";
	cin >> leituraAnterior;
	
	cout << "Informe a leitura atual: ";
	cin >> leituraAtual;
	
	consumo = leituraAtual - leituraAnterior;
	cout << "*****Seu consumo atual foi:" << consumo << "*****" << endl;
	
	
//	Verifica se consumo atual é maior que anterior.
	if (consumo > 0) {
		cout << "Seu consumo atual foi maior.\r\n";
	}
	
	
	cout << "Informe seu tipo de ligação: \r\n1 - Residencial\r\n2 - Industrial \r\n3 - Comercial\r\n";
	cin >> tipoLigacao;
	
	if (tipoLigacao == 1) {//Consumo Residencial
		cout << "Seu consumo é residencial.\r\n";
		valorFinal = consumo * 0.60;
	}
	
	if (tipoLigacao == 2) {//Consumo Industrial
		cout << "Seu consumo é comercial.\r\n";
		valorFinal = consumo * 0.48;
	}
	
	if (tipoLigacao == 3) {//Consumo Comercial
		cout << "Seu consumo é industrial.\r\n";
		valorFinal = consumo * 1.29;
	}
	
	
	printf("A PAGAR: %.2lf \r\n", valorFinal);
	cout << "Nome: " << nomeCliente << endl;
	printf("Consumo: %d", consumo);
	
	return 0;
}
