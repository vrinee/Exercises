#include <stdio.h>
#include <stdlib.h>

int main () {
    int array[5] = {5,8,9,1,16};
    int biggest = array[0];

    for (int i = 0; i < 5; i++){
        if (array[i] >= biggest){
            biggest = array[i];
        }
    }
    printf("The biggest number in the array is %d\n", biggest);
}