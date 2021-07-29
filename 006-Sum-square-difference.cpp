//https://projecteuler.net/problem=6

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long int sum=0;
    long long int sumOfSquare=0;
    for(int i =1; i<=100; i++){
        sum+=i;
    }
    sum=sum*sum;
    for(int i =1; i<=100; i++){
        sumOfSquare+=(i*i);
    }

    cout << abs(sumOfSquare-sum);
}