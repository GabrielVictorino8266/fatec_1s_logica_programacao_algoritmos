#include <iostream>

using namespace std;

//Calcule e mostre o total do seu sal�rio no referido m�s, 
//sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS e 
//5% para o sindicato, fa�a um programa que nos d�: sal�rio bruto. 
//quanto pagou ao INSS. quanto pagou ao sindicato. o sal�rio l�quido. 
//calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:
//+ Sal�rio Bruto : R$-IR (11%) : R$-INSS (8%) : R$-Sindicato ( 5%) : R$= Sal�rio Liquido : R$Obs.: Sal�rio Bruto -Descontos = Sal�rio L�quido.

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double valor_hora=0.0, horas_trabalhadas=0.0;
	
	double salario_bruto, salario_liquido;
	
	double imposto_renda=0.11, inss=0.08, sindicato=0.05, descontos=0.0;
	
	cout << "Informe as horas trabalhadas no mes:\n";
	cin >> horas_trabalhadas;
	
	cout << "Informe o valor por hora: \n";
	cin >> valor_hora;
	
	salario_bruto = valor_hora * horas_trabalhadas;
	
	descontos = imposto_renda * salario_bruto;
	descontos += inss * salario_bruto;
	descontos += sindicato * salario_bruto;

	salario_liquido = salario_bruto - descontos;
	
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);	
	cout << "Seu salario liquido sera: R$ " << salario_liquido << endl;
	
	system("pause");
	return 0;
}
