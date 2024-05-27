#include <iostream>
#include <stdlib.h>  
#include <locale.h> 
#include <ctime> 


using namespace std;
	const int MAX_LINHAS = 3;
	const int MAX_COLUNAS = 3;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void soma_matriz(int matriz[MAX_LINHAS][MAX_COLUNAS],int linha1, int linha2){
	
	if(linha1 >= MAX_LINHAS || linha2 >= MAX_LINHAS){
		cout << "Intervalo incorreto" << endl;
	}
	
	for(int c = 0; c <= MAX_COLUNAS;c++){
		matriz[linha2][c] += matriz[linha1][c];
	}
	
}

void multiplicacao_matriz(int matriz[MAX_LINHAS][MAX_COLUNAS],int linha1, int linha2){
	
	if(linha1 >= MAX_LINHAS || linha2 >= MAX_LINHAS){
		cout << "Intervalo incorreto" << endl;
	}
	
	for(int c = 0; c <= MAX_COLUNAS;c++){
		matriz[linha2][c] *= matriz[linha1][c];
	}
	
}


int main(int argc, char** argv) {
	int matriz[MAX_LINHAS][MAX_COLUNAS];
	int matrizsoma[MAX_LINHAS][MAX_COLUNAS];
	int matrizmulti[MAX_LINHAS][MAX_COLUNAS];

	int valor = 0;
	srand(time(0));
	
	for(int l = 0; l < MAX_LINHAS; l++){
		for(int c = 0; c < MAX_COLUNAS; c++){
			valor = rand() % 10 + 1;
			matriz[l][c] = valor;
		}
	}
	
    for(int i = 0; i < MAX_LINHAS; ++i) {
        for(int j = 0; j < MAX_COLUNAS; ++j) {
            matrizmulti[i][j] = matriz[i][j];
        }
    }
    
    for(int i = 0; i < MAX_LINHAS; ++i) {
        for(int j = 0; j < MAX_COLUNAS; ++j) {
            matrizsoma[i][j] = matriz[i][j];
        }
    }
	
	cout << "Matriz antes soma e multiplicacao: " << endl;
	for(int l = 0; l < MAX_LINHAS; l++){
		for(int c = 0; c < MAX_COLUNAS; c++){
			cout << matriz[l][c] << " ";
		}
		cout << endl;
	}
	
	soma_matriz(matrizsoma,0,1);
	
	cout << "Matriz apos soma: " << endl;
	for(int l = 0; l < MAX_LINHAS; l++){
		for(int c = 0; c < MAX_COLUNAS; c++){
			cout << matrizsoma[l][c] << " ";
		}
		cout << endl;
	}
	
	
	multiplicacao_matriz(matrizmulti,0,1);
	
	
	cout << "Matriz apos multiplicacao: " << endl;
	for(int l = 0; l < MAX_LINHAS; l++){
		for(int c = 0; c < MAX_COLUNAS; c++){
			cout << matrizmulti[l][c] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
