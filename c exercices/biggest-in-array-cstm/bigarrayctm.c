#include <stdio.h>
#include <stdlib.h>

int main(){
    int ind, i, biggestIndx;

    printf("Enter the size of the array: ");
    scanf("%d", &ind);

    int array[ind];

    for (i = 0; i < ind; i++){
        printf("Enter the %d element: ", i+1);
        scanf("%d", &array[i]);
    }

    int biggest = array[0];

    for (i = 0; i < ind; i++){
        if (array[i] >= biggest){
            biggest = array[i];
        }
    }

    printf("The biggest number in the array is %d\n", biggest);
    printf("The array is: ");

    for (i = 0; i < ind; i++){
        printf("%d\n ", array[i]);
        if (array[i] == biggest){
            printf("(biggest)\n ");
            biggestIndx = i;
        }
    }
    printf("The biggest number is in the %d index\n", biggestIndx);
    return 0;
}