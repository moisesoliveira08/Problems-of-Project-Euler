#include <iostream>

using namespace std;

int main()
{
	int numero = 1000;
	int i;
	
	int soma = 0;
	for (i=2; i<numero; i++){
		if(i % 3 == 0 || i % 5 == 0){
			soma = soma + i;
		}
	}
	
	cout<< "a soma eh:" << soma;
	
	return 0;
}