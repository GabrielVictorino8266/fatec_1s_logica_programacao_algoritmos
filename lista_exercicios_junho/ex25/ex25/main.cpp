#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    //matriz transposta é a troca de linhas por colunas
    //linha / coluna
    int MAX_LINHAS = 2;
    int MAX_COLUNAS = 3;
    int l, c;
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;

    
    cout << "Matriz normal: \n";
    for(l = 0; l < MAX_LINHAS;l++){//renderiza linhas
        for(c = 0; c < MAX_COLUNAS; c++){//renderiza colunas
            cout << matriz[l][c] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    cout << "Matriz transposta: \n";
    
    for(c = 0; c < MAX_COLUNAS; c++){//renderiza colunas
        for(l = 0; l < MAX_LINHAS;l++){//renderiza linhas
            cout << matriz[l][c] << " ";
        }
            cout << endl;
    }
    
    return 0;
}
