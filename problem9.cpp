#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

int main(){
    int a,b,c,l1,l2,l3;
    for (c = 997;c>=335;c--){
        for(a = 1;a<=335;a++){
            b = 1000 - a - c;
                    if(c*c == a*a + b*b){
                        l1 = a;
                        l2 = b;
                        l3 = c;
                    }
                
                
        }
    }
    
    cout<<""<<l1<<endl;
    cout<<""<<l2<<endl;
    cout<<""<<l3<<endl;
    
    int produto;
    produto = l1*l2*l3;
    
    cout<<"o produto eh: "<<produto;
    
    
    
    return(0);
}





