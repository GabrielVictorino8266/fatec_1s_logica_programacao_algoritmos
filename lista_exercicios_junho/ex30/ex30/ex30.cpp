#include <iostream>
#include <vector>


using namespace std;

unsigned long long int numeroPerfeito(unsigned long long int numero){
    vector<unsigned long long int> vetor;
    unsigned long long int soma = 0;
    unsigned long long int i = 0;
    
        for(i = 1; i <= numero / 2; i++){
            if(numero % i == 0){
                cout << i << " ";
                vetor.push_back(i);
            }
        }
        
        for(i = 0; i < vetor.size(); i++){
            soma += vetor[i];
        }
        
        cout << endl;
        
        if(soma == numero){
            cout << "NUMERO PERFEITO!" << endl;

        }else{
            cout << "NUMERO NAO PERFEITO!" << endl;
            cout << "soma: " << soma << endl;
        }

    
    return soma; 
}

int main()
{
    unsigned long long int numero;
    
    cout << "Numero: ";
    cin >> numero;
    numeroPerfeito(numero);
    cout << endl;

    return 0;
}
