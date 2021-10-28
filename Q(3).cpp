#include <iostream>
#include <vector>

using namespace std;

bool is_prime(long int num){ // função para verificar se um número é primo
    int i;
    bool isprime = true;
    if (num == 1)
        return false;
    if (num == 2)
        return true;
        
    else{
    for (i = 2; i<=num/2; i++){
        if (num % i == 0){
             isprime =false;
             break;
        }
        }
    return isprime;

    }
}

int main (){
	
    vector < long int > Prime_factors; // vector dos fatores primos do numero
    
    long int numero = 600851475143 ;
    
    int i = 2;
    while(numero !=1){
        if (is_prime(numero)){
           Prime_factors.push_back(numero);
           numero = 1;
        }
        else if (is_prime(i) and numero % i == 0){ // faz a fatoração do número
            numero = numero/i;
            Prime_factors.push_back(i); // acrescenta o valor do número primo no vector a cada iteração
        }
        else
            i = i + 1;
    }
     int y = Prime_factors.size(); // retorna o tamanho do vetor
    
    cout<<"the largest prime factor is "<<Prime_factors[y-1]; // retorna o ultimo elemento do vetor, que, nesse caso, também é o maior elemento
    
    return 0;
}
