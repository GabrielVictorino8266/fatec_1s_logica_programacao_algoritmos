#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double area=0.0, cap_litros=0.0, valor_lata=80.00, lata_litros=0.0, custo_total=0.0;
	
	
	cout << "Informe a area (m2): \n";
	cin >> area;
	
	cout << "Confirme o valor da lata de tinta: \n";
	cin >> valor_lata;
	
	cout << "Confirme a capacidade em L. da lata de tinta: \n";
	cin >> cap_litros;
	
	custo_total = ((area / 3) /  cap_litros) * valor_lata;
	
	cout << "Para pintar uma area de " << area << " m2. E necessario: \n";
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	cout << "Litros tinta: " << area / 3 << " l." << endl;
	cout << "Custo: R$ " << custo_total << endl;
	
	
	system("pause");
	return 0;
}
