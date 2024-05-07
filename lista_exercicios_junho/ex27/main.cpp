#include <iostream> 
#include <stdlib.h>  
#include <locale.h> 
#include <ctime> 

using namespace std; 


int main() 
{ 
    setlocale(LC_ALL,""); 

    //linha / coluna 
    int MAX_LINHAS = 24; 
    int MAX_COLUNAS = 4; 
    int l, c; 
    int valor, total; 
    int media = 0, MAIOR = 0, paciente=0; 
    int matriz[MAX_LINHAS][MAX_COLUNAS]; 

  
    srand(time(0)); 

    for(l = 0; l < MAX_LINHAS;l++){//renderiza linhas 

        for(c = 0; c < MAX_COLUNAS; c++){//renderiza colunas 

           valor = rand() % 100 + 1; 

           matriz[l][c] = valor; 

        } 

        cout << endl; 

    } 

    cout << "Matriz 24x4: \n"; 

    for(l = 0; l < MAX_LINHAS;l++){//renderiza linhas 
        for(c = 0; c < MAX_COLUNAS; c++){//renderiza colunas 
           cout << " " << matriz[l][c] << "   "; 
        } 
        cout << endl; 

    }
  

    cout << endl;   

    cout << "Médias: \n"; 

    for(c = 0; c < MAX_COLUNAS; c++){//renderiza colunas 
        for(l = 0; l < MAX_LINHAS;l++){//renderiza linhas 
            total += matriz[c][l]; 
        } 
        cout << endl; 
		media = total / 24;
		
		if(MAIOR < media){
			MAIOR = media;
			paciente = c + 1;
		}
		
        cout << "Média Paciente " << c + 1 << " " << total / 24 << endl; 
        total = 0; 
    } 

    cout << "Maior: " << MAIOR << " - Paciente: " << paciente << endl; 

    return 0; 
} 
