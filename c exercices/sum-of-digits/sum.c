#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, sum = 0;
    printf("Enter a number to see its sum of digits: ");
    scanf("%d", &x);
    while(x != 0){
        sum += x % 10;
        x /= 10;
    }
    printf("The sum of digits is %d\n", sum);
}