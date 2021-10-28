#include <iostream>
#include <vector>

using namespace std;

int main (){
	
	vector < long int > Fibonnaci;
	
	Fibonnaci.push_back(1);
	Fibonnaci.push_back(2);
	
	int soma = 2;
	
	int i = 1;
	while (Fibonnaci[i] <= 4000000){
		i = i + 1;
		Fibonnaci.push_back( Fibonnaci[i-1] + Fibonnaci[i-2]); // acrescenta os termos da sequência de fibonnaci
		if (Fibonnaci[i] % 2 == 0) // termos da sequencia que são múltiplos de 2
			soma = soma + Fibonnaci[i];

	}
	
	cout<<soma;
	
	return 0;
	
}
