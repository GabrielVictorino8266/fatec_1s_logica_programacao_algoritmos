//Criar um programa em C++ para verificar se uma determinada m�quina necessita de manuten��o. Ser�o necess�rias as seguintes entradas de dados:
// 
//ENTRADAS
//Nome do Funcion�rio 
//C�digo da M�quina
//Total de Pe�as Produzidas 
//Total de Pe�as Defeituosas
// 
//C�LCULOS
// 
//Calcule a quantidade de pe�as referente a 10% da produ��o.
// 
//Ap�s calcular a porcentagem armazene o texto, conforme as regras abaixo, na vari�vel mensagem:
// 
//- Se a quantidade de pe�as defeituosas for superior a 10% da produ��o, escreva �A M�quina precisa de manuten��o�.
// 
//- Se a quantidade de pe�as defeituosas for menor que 10% da produ��o, escreva �A M�quina est� funcionando perfeitamente�.
// 
//SA�DAS
// 
//Ap�s o c�ulculo, mostrar a mensagem com o Nome do Funcion�rio, C�digo da M�quina e a mensagem


#include <iostream>
#include <locale.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	string nome_func;
	int cod_maq;	
	float total_producao=0, total_defeitos=0, porcentagem_defeitos=0.0;
	
	printf("Informe seu nome: \n");
	cin >> nome_func;
	
	printf("Informe o cod. da maquina: \n");
	cin >> cod_maq;
	
	printf("Informe o total da produ��o: \n");
	cin >> total_producao;
	
	printf("Informe o total de pe�as defeituosas: \n");
	cin >> total_defeitos;
	
	porcentagem_defeitos = (total_defeitos / total_producao);
	
//	printf("%f", porcentagem_defeitos);
	
	if(porcentagem_defeitos >= 0.10){
		printf("Funcionario: %s, Maquina: %d, A M�quina precisa de manuten��o. ", nome_func.c_str(), cod_maq);
	}else{
		printf("Funcionario: %s, Maquina: %d, A M�quina est� funcionando perfeitamente. ", nome_func.c_str(), cod_maq);
	}
	
	return 0;
}
