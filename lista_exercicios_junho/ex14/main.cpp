#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator> // Inclua este cabeçalho para usar ostream_iterator

using namespace std;

int main() {
    int NUM_MAX = 0;
    
    cout << "Informe um numero maximo: \n\n";
    cin >> NUM_MAX;
    
    
    vector<int> vetor;
    
    //popula o vetor
    for(int i = 1; i <= NUM_MAX; i++){
        vetor.push_back(i);
    }  
    cout << endl;
    
//    // Removendo o primeiro ultimo elemento
//	vetor.erase(vetor.begin());
//	vetor.pop_back(); 
		copy(vetor.begin(), vetor.end(), ostream_iterator<int>(cout, " "));
	    cout << std::endl;
	
	while(vetor.size() > 1){
	    // Removendo o primeiro ultimo elemento
		vetor.erase(vetor.begin());
		vetor.pop_back(); 
		
		copy(vetor.begin(), vetor.end(), ostream_iterator<int>(cout, " "));
	    cout << std::endl;
	}	
	                
	return 0;
}
