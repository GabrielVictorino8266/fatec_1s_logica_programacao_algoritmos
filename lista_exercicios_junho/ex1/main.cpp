#include <iostream>

using namespace std;

//Fa�a  um  Programa  que  pergunte  quanto  voc�  ganha  por hora  e 
// o  n�mero  de  horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido m�s.

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string mes="";
	double horas_trabalhadas=0.0,valor_hora=0.0,total_salario=0.0;
	
	cout << "Informe o mes atual: \n";
	cin >> mes;
	cout << "Informe quantas horas trabalhadas: \n";
	cin >> horas_trabalhadas;
	cout << "Informe seu valor por hora: \n";
	cin >> valor_hora;
	
	total_salario = valor_hora * horas_trabalhadas;

	cout.precision(2); // precisao da proxima saida de double float
	cout.setf(ios::fixed, ios::floatfield);//O primeiro e para definir o ponto fixo e o segundo e a mascara do float para ser alterada
	cout << "Seu salario total em " << mes << " foi de : R$ " << total_salario << endl;
	
	system("pause");
	return 0;
}
