
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    long int i, j, num, aux;
    long int rev = 0;
    long int soluc = 0;
    for(i=999; i>99; i--){
        for(j=999; j>99; j--){
            num = i*j;
            aux = num;
            rev = 0;
            while(aux!=0){
                 rev = rev * 10 + aux % 10;
                 aux = aux / 10;
            }
            
            if ((rev == num) && num > soluc)
                soluc = num;
            
        } 
    }
    cout<<"o maior palíndromo eh: "<<soluc;
}


