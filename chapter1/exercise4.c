#include<stdio.h>

// this one will be Celsius to Fahenheit
int main(){
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;
    upper = 100;
    step = 5;

    fahr = lower;
    printf("Celsius   Fahrenheit\n");
    while (celsius <= upper){
        fahr = celsius * 1.8 + 32;
        printf("%5.0f %11.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}