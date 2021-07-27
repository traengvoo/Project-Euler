#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double phi = (sqrt(5)+1)/2;
    double sum = 0;
    for(int i = 3; i<34; i=i+3){
        cout << round(pow(phi, i)/sqrt(5)) << endl;
        sum += round(pow(phi, i)/sqrt(5));
    }
    cout << sum;
} 