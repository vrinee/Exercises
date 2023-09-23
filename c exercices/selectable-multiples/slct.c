#include <stdio.h>
#include <stdlib.h>

int main (){
    int rangeMin, rangeMax, mult;
    printf("Enter the first number of the range: ");
    scanf("%d", &rangeMin);
    printf("Enter the last number of the range: ");
    scanf("%d", &rangeMax);
    printf("Enter which multiple you want to see: ");
    scanf("%d", &mult);
    for (int i = rangeMin; i <= rangeMax; i++){
        if (i % mult == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}