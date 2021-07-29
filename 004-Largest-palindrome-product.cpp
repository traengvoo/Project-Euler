//A palindromic number reads the same both ways. 
//The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

bool CheckPalindrome(int a){
    int temp = 0;
    int temp2 = a;
    while(temp2>0){
        temp = temp*10+temp2%10;
        temp2 = temp2/10;
    }
    if(temp == a){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    for(int i = 100; i <= 999; i++){
        for(int j = 100; j <= 999; j++){
            int number = i*j;
            if(CheckPalindrome(number)){
                cout << number << endl;
            }
        }
    }
}