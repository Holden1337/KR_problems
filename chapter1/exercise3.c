#include<stdio.h>

// for this one we will add a heading to the table
int main(){
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahenheit   Celsius\n");
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%5.0f %11.1f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}