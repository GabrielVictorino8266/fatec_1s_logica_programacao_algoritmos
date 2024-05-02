#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator> // Inclua este cabeçalho para usar ostream_iterator


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int max = 21;
	int termo_a, termo_b, termo_c;
	int i_a = 0,i_b = 1;
	
	vector<int> vetor;
	cout << "Fibonacci" << endl;
	
	vetor.push_back(1);//e 1
	vetor.push_back(1);//e 2
	
	termo_a = vetor[0];
	termo_b = vetor[1];
	
	while(vetor.size() < 8){
		termo_a = vetor[i_a++];
		termo_b = vetor[i_b++];
		termo_c = termo_a + termo_b;
		vetor.push_back(termo_c);

		cout << "A: " << termo_a << " - i_a= " << i_a << endl;
		cout << "B: " << termo_b << " - i_b= " << i_b << endl;
		cout << "Tamanho vetor: " << vetor.size() << endl;
		copy(vetor.begin(), vetor.end(), ostream_iterator<int>(cout, ", "));
	    cout << std::endl;
	    cout << "****\n";
	}


	
	return 0;
}
