#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool is_prime(long int num){ // função para verificar se um número é primo
    int i;
    bool isprime = true;
    if (num == 1)
        return false;
    if (num == 2)
        return true;
        
    else{
    for (i = 2; i<=sqrt(num); i++){
        if (num % i == 0){
             isprime =false;
             break;
        }
        }
    return isprime;

    }
}

int main(){
    long int n = 2000000;
    long int i;
    long int sum = 0;
    
    for(i = 2; i<=n; i++){
        if(is_prime(i))
            sum += i; // soma sempre o número primo seguinte
    }
    
    cout<<"a soma eh: "<<sum;
    
    return 0;
}

