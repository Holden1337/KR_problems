#include<stdio.h>

//Lets try some different escape characters

int main(){
    printf("hello world \n");
    printf("hello, world\t"); // tab
    printf("\n");
    printf("hello, world\b"); // backspace
    printf("\n");
    printf("hello, world \r"); // return carriage
    printf("\n");
    printf("hello, world \a"); // alert
    return 0;
}