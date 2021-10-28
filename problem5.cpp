#include <iostream>
using namespace std;
int main()
{
    int i, counter, aux, keep;
    i = 2;
    aux = 2;
    while (i <=20){
            if (aux % i == 0){
                keep = aux;
                counter ++;
                i = i + 1;
            }
            
            else{    
                aux = aux + 1;
                counter = 0;
                i = 2;
                keep = 0;
                }
            }
                
    cout<<"o valor eh: "<<keep;
        
    
    return 0;
}
