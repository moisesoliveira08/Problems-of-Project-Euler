#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n = 100;
    int sum_of_the_squares = 0;
    int sum, i, square_of_the_sum, difference;
    for (i=1;i<=n;i++){
        sum_of_the_squares = sum_of_the_squares + i*i;
    }
    
    sum = (1+n)*n/2;
    
    square_of_the_sum = sum*sum;
    
    difference =  square_of_the_sum - sum_of_the_squares;
    cout<<""<<difference;
    
    return 0;
}

