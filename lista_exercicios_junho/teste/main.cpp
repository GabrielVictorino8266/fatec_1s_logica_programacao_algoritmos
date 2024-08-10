#include <iostream>

#include <math.h> // importa funcoes matematicas

using namespace std;

//Fa?a um Programa que pe?a 2 n?meros inteiros e um n?mero real.

//Calcule e mostre: o produto do dobro do primeiro com metade do segundo.

// a soma do triplo do primeiro com o terceiro.

//o terceiro elevado ao cubo.

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

int numero_um=0, numero_dois=0;

double numero_tres=0.0, res_um=0.0, res_dois=0.0, res_tres=0.0;

cout << "Informe o primeiro inteiro: \n";

cin >> numero_um;

cout << "Informe o segundo inteiro: \n";

cin >> numero_dois;

cout << "Informe o terceiro (real): \n";

cin >> numero_tres;

cout << "O produto do dobro do primeiro com metade do segundo. \n";

res_um = (numero_um * 2) * (numero_dois / 2);

cout << res_um << endl;

cout << "A soma do triplo do primeiro com o terceiro. \n";

res_dois = (3 * numero_um) + numero_tres;

cout << res_dois << endl;

cout << "o terceiro elevado ao cubo. \n";

// res_tres = nummero_tres ** 3;

cout << pow(numero_tres, 3) << endl;

// Outra versao do codigo

//

// int numero_um=0, numero_dois=0;

// double numero_tres=0.0;

//

// cout << "Informe o primeiro inteiro: \n";

// cin >> numero_um;

//

// cout << "Informe o segundo inteiro: \n";

// cin >> numero_dois;

//

// cout << "Informe o terceiro (real): \n";

// cin >> numero_tres;

//

// cout << "O produto do dobro do primeiro com metade do segundo. \n";

// cout << (numero_um * 2) * (numero_dois / 2);

//

// cout << "A soma do triplo do primeiro com o terceiro. \n";

// cout << (3 * numero_um) + numero_tres;

//

// cout << "o terceiro elevado ao cubo. \n"

// cout << pow(numero_tres, 3) << endl;

system("pause");

return 0;

}
