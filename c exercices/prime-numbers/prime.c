#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, i, prime = 1;
    printf("Enter a number to see if it is a prime number: ");
    scanf("%d", &x);
    for(i = 2; i < x/2 ; i++){
        if (x % i == 0){
            prime = 0;
            printf("Your number is divisible by %d\n", i);
        }
    }
    if (prime == 1){
        printf("Your number is a prime number\n");
        return 0;
    }
    printf("Your number is not a prime number\n");
}