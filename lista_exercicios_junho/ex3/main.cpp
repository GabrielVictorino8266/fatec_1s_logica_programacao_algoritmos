#include <iostream>

using namespace std;

//Calcule e mostre o total do seu salário no referido mês, 
//sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 
//5% para o sindicato, faça um programa que nos dê: salário bruto. 
//quanto pagou ao INSS. quanto pagou ao sindicato. o salário líquido. 
//calcule os descontos e o salário líquido, conforme a tabela abaixo:
//+ Salário Bruto : R$-IR (11%) : R$-INSS (8%) : R$-Sindicato ( 5%) : R$= Salário Liquido : R$Obs.: Salário Bruto -Descontos = Salário Líquido.

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
