#include <iostream>
#include <stdlib.h> 
#include <locale.h>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    //matriz transposta é a troca de linhas por colunas
    //linha / coluna
    int MAX_LINHAS = 10;
    int MAX_COLUNAS = 10;
    int local_l = 0, local_c = 0;
    int l, c;
    int valor;
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int MAIOR;
    
    srand(time(0));
    
    for(l = 0; l < MAX_LINHAS;l++){//renderiza linhas
        for(c = 0; c < MAX_COLUNAS; c++){//renderiza colunas
           valor = rand() % 10000 + 1;
           matriz[l][c] = valor;
        }
        cout << endl;
    }
    
    cout << "Matriz 10x10: \n";
    for(l = 0; l < MAX_LINHAS;l++){//renderiza linhas
        for(c = 0; c < MAX_COLUNAS; c++){//renderiza colunas
            cout << " " << matriz[l][c] << "   ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    MAIOR = matriz[0][0];
    
    for(l = 0; l < MAX_LINHAS;l++){
        for(c = 0; c < MAX_COLUNAS; c++){
           valor = matriz[l][c];
           
           if(valor > MAIOR){
               MAIOR = valor;
               local_l = l + 1;
               local_c = c + 1;
           }
           
        }
    }
    cout << "O maior numero e: " << MAIOR << " localizado em " << local_l << " x " << local_c << endl;

    return 0;
}
