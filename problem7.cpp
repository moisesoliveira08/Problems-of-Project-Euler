
#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

bool is_prime(long int num){
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

int main(){
    int n;
    vector < long int > Primes;
    n = 0;
    int i = 2;
    while(n < 10001){
        if(is_prime(i)){
            n = n + 1;
            Primes.push_back(i);
        }
    
        i += 1;
    }
        
    cout<<"the 10001st prime number is: "<<Primes[10000];
    
    return (0);
}
    



