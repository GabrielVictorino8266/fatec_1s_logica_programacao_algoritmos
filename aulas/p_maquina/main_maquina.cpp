//Criar um programa em C++ para verificar se uma determinada máquina necessita de manutenção. Serão necessárias as seguintes entradas de dados:
// 
//ENTRADAS
//Nome do Funcionário 
//Código da Máquina
//Total de Peças Produzidas 
//Total de Peças Defeituosas
// 
//CÁLCULOS
// 
//Calcule a quantidade de peças referente a 10% da produção.
// 
//Após calcular a porcentagem armazene o texto, conforme as regras abaixo, na variável mensagem:
// 
//- Se a quantidade de peças defeituosas for superior a 10% da produção, escreva “A Máquina precisa de manutenção”.
// 
//- Se a quantidade de peças defeituosas for menor que 10% da produção, escreva “A Máquina está funcionando perfeitamente”.
// 
//SAÍDAS
// 
//Após o cáulculo, mostrar a mensagem com o Nome do Funcionário, Código da Máquina e a mensagem


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
	
	printf("Informe o total da produção: \n");
	cin >> total_producao;
	
	printf("Informe o total de peças defeituosas: \n");
	cin >> total_defeitos;
	
	porcentagem_defeitos = (total_defeitos / total_producao);
	
//	printf("%f", porcentagem_defeitos);
	
	if(porcentagem_defeitos >= 0.10){
		printf("Funcionario: %s, Maquina: %d, A Máquina precisa de manutenção. ", nome_func.c_str(), cod_maq);
	}else{
		printf("Funcionario: %s, Maquina: %d, A Máquina está funcionando perfeitamente. ", nome_func.c_str(), cod_maq);
	}
	
	return 0;
}
