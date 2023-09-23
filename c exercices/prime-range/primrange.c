#include <stdio.h>
#include <stdlib.h>

int main (){

    int rangeMin, rangeMax, i, j, prime = 1;

    printf("Enter the first number of the range: ");
    scanf("%d", &rangeMin);
    printf("Enter the last number of the range: ");
    scanf("%d", &rangeMax);

    for (i = rangeMin; i <= rangeMax; i++){
        for (j = 2; j < i/2; j ++){
            if (i % j == 0){
                prime = 0;
                break;
            }
        }
        if (prime == 1){
            printf("%d is a prime number\n", i);
        }
        prime = 1;
    }
}