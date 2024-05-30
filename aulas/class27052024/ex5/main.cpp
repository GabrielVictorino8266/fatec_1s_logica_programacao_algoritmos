#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> primeiro_vetor;
    vector <int> segundo_vetor;
    vector <int> terceiro_vetor;
    int valor_posicao_primeiro_vetor = 0;
    int valor_posicao_segundo_vetor = 0;

    int numero_a_inserir = 0;

    cout << "PRIMEIRO VETOR \n\n";
    
    for(int i = 0; i < 10;i++){
        cout << "Digite um numero: " << endl;
        cin >> numero_a_inserir;
        
        primeiro_vetor.push_back(numero_a_inserir);
    }
    
    cout << "\n\n";
    
    for(int i = 0; i < 10;i++){
        cout << primeiro_vetor[i] << " ";
    }
    
    
    cout << "\n";
    
    cout << "SEGUNDO VETOR \n\n";

    for(int i = 0; i < 10;i++){
        cout << "Digite um numero: " << endl;
        cin >> numero_a_inserir;
        
        segundo_vetor.push_back(numero_a_inserir);
    }
    
    cout << "\n";
    
    for(int i = 0; i < 10;i++){
        cout << segundo_vetor[i] << " ";
    }
    
    
    
    
    for(int i = 0; i < 20;i++){
        if(i % 2 == 0 && valor_posicao_primeiro_vetor < 10){
            terceiro_vetor.push_back(primeiro_vetor[valor_posicao_primeiro_vetor]);
            valor_posicao_primeiro_vetor++;
        }
        if(i % 2 == 0 && valor_posicao_segundo_vetor < 10){
            terceiro_vetor.push_back(segundo_vetor[valor_posicao_segundo_vetor]);
            valor_posicao_segundo_vetor++;
        }
    }
    
    
    cout << "\n";
    cout << "Terceiro vetor: \n";

    
    for(int i = 0; i < 20;i++){
        cout << terceiro_vetor[i] << " ";
    }
    
    
    return 0;
}
