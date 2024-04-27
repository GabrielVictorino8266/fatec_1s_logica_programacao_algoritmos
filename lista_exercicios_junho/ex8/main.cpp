#include <iostream>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int l1, l2, l3;
	
	cout << "Informe apenas lados inteiro para formar um traingulo: \n";
	cin >> l1 >> l2 >> l3;
	
	if ((l1+l2) > l3 && (l1+l3) > l2 && (l1+l3) > l1){
		cout << "Triangulo existe!!!\n";
		if(l1==l2 && l1==3 && l1==l3){
			cout << "Triangulo Equilatero\n";
		}else if((l1 == l2 && l1 != l3) || (l1 == l3 && l1 != l2)){
			cout << "Traiangulo Isosceles\n";
		}else{
			cout << "Triangulo Escaleno\n";
		}
	}else{
		cout << "Trangulo nao existe!!!\n";
	}
	
	system("pause");
	return 0;
}
