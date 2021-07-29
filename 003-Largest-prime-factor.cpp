//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

#include <iostream>
#include <math.h>
using namespace std;

bool PrimeCheck(int a){
    for(int i = 2; i<sqrt(a); i++){
        if(a%i == 0){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    unsigned long long int number = 600851475143;
    for(long long int i = 2; i < number; i++){
        if(PrimeCheck(i)){
            if(number%i == 0){
                cout << i << endl;
            }
        }
    }
}