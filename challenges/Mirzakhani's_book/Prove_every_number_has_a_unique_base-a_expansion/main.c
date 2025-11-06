#include <stdio.h>
#include <math.h>


void calculateBaseExpansion(int number, int base){
    int n = number;
    int a = base;
    int remainder;
    int maxDigits = (int)(log(number) / log (base)) +1;
    int expansion[maxDigits];
    int count = 0;

    while (n != 0){
           remainder = n % a;
           expansion[count] = remainder;
           n = n / a;
           count++;
    }
    for (int i = count -1; i >= 0; i--){
        printf("%d", expansion[i]);
    }
    printf("\n");
}

int main(){
    calculateBaseExpansion(80, 3);
};
