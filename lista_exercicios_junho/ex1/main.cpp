#include <iostream>

using namespace std;

//Faça  um  Programa  que  pergunte  quanto  você  ganha  por hora  e 
// o  número  de  horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

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
