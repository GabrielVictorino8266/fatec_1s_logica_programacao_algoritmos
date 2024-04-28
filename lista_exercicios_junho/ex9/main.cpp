#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	double a,b,c;
	double delta = 0;
	double x1, x2;
	
	cout << "Informa a: \n";
	cin >> a;
	
	if(a==0){
		cout << "Programa não pode continuar.\n";
	}else{
		cout << "Informe b e c (respectivamente): \n";
		cin >> b >> c;
		
		delta = b*b - 4*a*c;
		
		if(delta < 0){
			cout << "Impossivel continuar. Delta Negativo. \n";
		}else if(delta == 0){
			cout << "Delta: "<< delta << endl;
			
			x1 = -b / (2.0*a);
			cout << "Solucao: x1 = x2 = " << x1 << endl;
		}else{
			cout << "Delta: "<< delta << endl;
	
			cout << "Raiz quadrada de delta: \n" << sqrt(delta) << endl;
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "X1: " << x1 << endl;
			cout << "X2: " << x2 << endl;
		}
	}
	
	
	
	system("pause");
	return 0;
}
