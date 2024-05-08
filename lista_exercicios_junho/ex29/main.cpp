#include <iostream>
#include <locale.h>

using namespace std;

int retorna_posicao(char c, int size_string, string texto){
    int posicao = 0;
    
    for(int i = 0; i < size_string;i++){
        if(texto[i] == c){
            posicao = i;
            break;
        }
    }
    
    return posicao;
}

int main()
{
    setlocale(LC_ALL,"");
    
    string texto;
    char caracter;
    
    cout << "Informe um texto (sem acentos): \n";
    cin >> texto;
    
    cout << "Informe um caracter: \n";
    cin >> caracter;
    
    cout << "A posicao de " << caracter << " e: " << retorna_posicao(caracter, texto.length(), texto) + 1;
    
    return 0;
}
