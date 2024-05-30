#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vetor;
    int numero_a_inserir = 0;
    int MAIOR = 0;
    int posicao_maior = 0;
    int MENOR = 0;
    int posicao_menor = 0;
    
    for(int i = 0; i <= 4;i++){
        cout << "Digite um numero: " << endl;
        cin >> numero_a_inserir;
        vetor.push_back(numero_a_inserir);
    }
    
    MENOR = vetor[0];
    cout << "\n\n";
    
    for(int i = 0; i <= 4;i++){
        cout << vetor[i] << " ";
        if(vetor[i] > MAIOR){
            MAIOR = vetor[i];
            posicao_maior = i;
        }
        if(vetor[i] < MENOR){
            MENOR = vetor[i];
            posicao_menor = i;
        }
        
    }

    cout << "\n\n";
    
    cout << "MAIOR: " << MAIOR << " na posicao: " << posicao_maior << endl;
    cout << "MENOR: " << MENOR << " na posicao: " << posicao_menor << endl;

    return 0;
}
