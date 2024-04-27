#include <iostream>
#include <locale.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	
	float nota1=0, nota2=0, nota3=0, nota4=0, freq=0.0;
	
	
	printf("Informe a nota1: \n");
	cin >> nota1;
	
	printf("Informe a nota2: \n");
	cin >> nota2;
	
	printf("Informe a nota3: \n");
	cin >> nota3;
	
	printf("Informe a nota4: \n");
	cin >> nota4;
	
	printf("Informe a frequencia do aluno: \n");
	cin >> freq;

	float media = 0.0;
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if(media >= 6 && freq >= 75){//aprovado
		printf("Aprovado\n");
		printf("Nota final %.2f \n", media);
		printf("Frquencia: %2.f\n", freq);
		
	}else if(media < 6 && media > 4){//reprovado
		printf("Reprovado \n", media);
		printf("Nota final %.2f \n", media);
		printf("Frquencia: %2.f\n", freq);
	}else{
		printf("Exame \n");
		printf("Nota final %.2f\n", media);
		printf("Frquencia: %2.f\n", freq);
	}
	
	return 0;
}
