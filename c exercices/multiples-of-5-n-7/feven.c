#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    printf("Enter a number to see if it is a multiple of five and seven: ");
    scanf("%d", &x);
    if (x % 5 == 0 && x % 7 == 0){
        printf("Your number is a multiple of five and seven\n");
        return 0;
    }
    printf("Your number is not a multiple of five and seven\n");
    return 0;
}