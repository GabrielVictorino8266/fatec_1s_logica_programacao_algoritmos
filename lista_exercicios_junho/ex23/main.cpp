#include <iostream>
#include <vector>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	vector <int> vetor;
	
	for(int i = 0;i < 100;i++){
		if(i % 7 != 0 && i % 10 != 7){
			vetor.push_back(i);
		}
	}
	
	for(int i = 0; i < vetor.size(); i++){
		cout << vetor[i] << " ";
	}
	
	
	return 0;
}
