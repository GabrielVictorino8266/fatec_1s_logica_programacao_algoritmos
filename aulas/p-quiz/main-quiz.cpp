#include <iostream>
using namespace std;

#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"");
	
	int acertos;
	char alternativa;
	
	cout << "Quest�o 01) O que � uma luz policrom�tica? Escolha a alternativa: \r\n a)Composta de Apenas uma cor  \r\n b)Composta de V�rias cores.  \r\n c)Composta por uma cor sozinha.  \r\n d)Todas Erradas. \r\n";
//	resposta correta: a
	cout << "Escolha a alternativa: \r\n";
	cin >> alternativa;
	
	if (alternativa == 'a') {//acertou:
		cout << "**************Parabens, acertou.\r\n";
		acertos++;
	}else{
		cout << "-------------Voc� errou.\r\n";
	}
	
	
	
	cout << "Quest�o 02) Brasileiro que fez parte de alguma descoberta/produ��o cient�fica importante?: \r\n a)James Watson  \r\n b)Luis Ernesto Miramontes  \r\n c)Todos  \r\n d)C�sar Lattes  \r\n";
//	resposta correta: b
	cout << "Escolha a alternativa: \r\n";
	cin >> alternativa;
	
	if (alternativa == 'b') {//acertou:
		cout << "**************Parabens, acertou.\r\n";
		acertos += 2;
	}else{
		cout << "-------------Voc� errou.\r\n";
	}


	cout << "Quest�o 03) Por quem foi introduzida, em 1798, a ideia de que o calor � energia?: \r\n a)Isaac Newton  \r\n b)John Herapath  \r\n c)Benjamin Thompson  \r\n d)Galileu Galilei  \r\n";
//	resposta correta: c
	cout << "Escolha a alternativa: \r\n";
	cin >> alternativa;
	
	if (alternativa == 'c') {//acertou:
		cout << "**************Parabens, acertou.\r\n";
		acertos++;
	}else{
		cout << "-------------Voc� errou.\r\n";
	}
	

	cout << "Quest�o 04) A primeira Lei de Newton afirma que, se a soma de todas as for�as atuando sobre o corpo for zero, o corpo �?: \r\n a)ter� um movimento uniformemente variado  \r\n b)ser� desacelerado  \r\n c)apresentar� velocidade constante em m�dulo, mas sua dire��o poder� ser alterada.  \r\n d)apresentar� velocidade constante\r\n";
//	resposta correta: d
	cout << "Escolha a alternativa: \r\n";
	cin >> alternativa;
	
	if (alternativa == 'd') {//acertou:
		cout << "**************Parabens, acertou.\r\n";
		acertos += 2;
	}else{
		cout << "-------------Voc� errou.\r\n";
	}		
	
	
	cout << "Quest�o 05) Dois fatores que influem na resist�ncia: \r\n a)Comprimento e �rea da se��o do condutor  \r\n b)Densidade e comprimento  \r\n c)�rea da se��o e cor do condutor  \r\n d)Comprimento e peso do condutor\r\n";
//	resposta correta: a
	cout << "Escolha a alternativa: \r\n";
	cin >> alternativa;
	
	if (alternativa == 'a') {//acertou:
		cout << "**************Parabens, acertou.\r\n";
		acertos++;
	}else{
		cout << "-------------Voc� errou.\r\n";
	}
	
	
	cout << "Acertos: " << acertos << " de 7 pontos." << endl;
	
	system("pause");
	return 0;
}
