//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
//we can see that the 6th prime is 13.
//What is the 10 001st prime number?

#include <iostream>
#include <math.h>
using namespace std;

bool PrimeCheck(long long int a){
    for(int i = 2; i<=sqrt(a); i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    unsigned long int count = 2;
    unsigned long long num = 3;
    while (count<10002)
    {
        num+=2;
        if(PrimeCheck(num)){
            count++;
        }
        else{
            continue;
        }
    }
    cout << num;
}