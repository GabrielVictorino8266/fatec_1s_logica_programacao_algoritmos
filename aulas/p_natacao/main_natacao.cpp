#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	string nome;
	int ano_atual=0, ano_nascimento=0, estilo_natacao=0, idade=0;
	
	time_t data_ano;
	time(&data_ano);
	
   	struct tm*data = localtime(&data_ano);

    ano_atual = (data->tm_year+1900); 
	printf("Ano atual: %d\n", ano_atual);
	
	printf("Nome atleta: ");
	cin >> nome;
	
	printf("Ano Nascimento: ");
	cin >> ano_nascimento;	
	
	idade = ano_atual - ano_nascimento;
	
	printf("Informe o tipo de natação:\n (1)Nado Livre\n (2)Nado de Costas\n (3)Nado Borboleta\n");
	cin >> estilo_natacao;
	
	if(estilo_natacao == 1){
		if(idade >= 16){
			printf("%s, nascido em %d, vá para Piscina1",nome.c_str(),ano_nascimento);
		}else{
			printf("Piscina5");
		}
	}else if(estilo_natacao == 2){
		if(idade > 21){
			printf("Piscina3");
		}else{
			printf("Piscina2");
		}
	}else{
		if(idade >= 12){
			printf("Piscina6");
		}else{
			printf("Piscina4");
		}
	}
	
	
	return 0;
}
