#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vetor;
    vector <int> vetor_iguais;
    int numero_a_inserir = 0;

    for(int i = 0; i < 10;i++){
        cout << "Digite um numero: " << endl;
        cin >> numero_a_inserir;
        
        for(int n = 0; n < vetor.size(); n++){
            if (vetor[n] == numero_a_inserir && vetor.size() >= 2){
                vetor_iguais.push_back(vetor[n]);
            }
        }
        
        vetor.push_back(numero_a_inserir);
    }
    
    cout << "\n\n";
    
    cout << "VETORES DIGITADOS: " << endl;
    
    for(int i = 0; i < vetor.size(); i++){
        cout << vetor[i] << " ";
    }

    cout << "\n\n";
    
    cout << "VETORES IGUAIS: " << endl;
    
    for(int i = 0; i < vetor_iguais.size(); i++){
        cout << vetor_iguais[i] << " ";
    }


    cout << "\n\n";
    
    return 0;
}
