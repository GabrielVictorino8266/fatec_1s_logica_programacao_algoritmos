#include <iostream>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	int idade;
	double peso, ml, qtde_gotas;
	
	//500mg por ml
	//1 ml = 20 gotas
	cout << "Informe sua idade: \n";
	cin >> idade;
	
	cout << "Informe seu peso: (KG)\n";
	cin >> peso;
	
	if(idade>=12){
		if(peso>=60){
		//tomam 1000mg
		ml = 1000 / 500;
		qtde_gotas = ml * 20;
		
		cout << "Mais de 12 anos.  Peso de maior que 60kg. Você irá tomar: " << qtde_gotas << " gotas.\n";
		
		}else{
			//tomam 875mg
		ml = float(875) / 500;// Tipo de divisao real, forcando converser explicatamente para float o primeiro operando.
		qtde_gotas = ml * 20;
		
		cout.precision(2);
		cout.setf(ios::fixed, ios::floatfield);
		cout << "Mais de 12 anos.  Peso menor que 60 kg. Você irá tomar: " << qtde_gotas << " gotas.\n";
		}
	}else{
		//menos de 12
		if(peso<=15){//200mg
			
			ml = float(200) / 500;
			qtde_gotas = ml * 20;
			
			cout.precision(2);
			cout.setf(ios::fixed, ios::floatfield);
			cout << "Menos de 12 anos.  Peso menor que 15 kg. Você irá tomar: " << qtde_gotas << " gotas.\n";
		}else if(peso<=30){//500mg
		
			ml = float(500) / 500;
			qtde_gotas = ml * 20;
			
			cout.precision(2);
			cout.setf(ios::fixed, ios::floatfield);
			cout << "Menos de 12 anos.  Peso menor que 30 kg e maior que 15kg. Você irá tomar: " << qtde_gotas << " gotas.\n";
			
		}else{//750mg
		
			ml = float(750) / 500;
			qtde_gotas = ml * 20;
	
			cout.precision(2);
			cout.setf(ios::fixed, ios::floatfield);		
			cout << "Menos de 12 anos.  Peso menor que 50 kg e maior que 30kg. Você irá tomar: " << qtde_gotas << " gotas.\n";
			
		}
	}
	
	system("pause");
	return 0;
}
