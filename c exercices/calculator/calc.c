#include <stdio.h>
#include <stdlib.h>

float add(x, y){
    return x + y;
}

float sub(x, y){
    return x - y;
}

float mul(x, y){
    return x * y;
}

float div(x, y){
    return x / y;
}

int main(){
    float n1, n2;
    char op,op2;

    printf("Enter a number: ");
    scanf("%f", &n1);
    printf("Enter an operator:\n - +\n - -\n - *\n - /\n");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%f", &n2);
    printf("Enter an operator:\n - +\n - -\n - *\n - /\n - =\n");
    scanf(" %c", &op2);
    if (op2 == '='){
        if (op ==  '+'){
            printf("%f", add(n1, n2));
        }
        else if (op == '-'){
            printf("%f", sub(n1, n2));
        }
        else if (op == '*'){
            printf("%f", mul(n1, n2));
        }
        else if (op == '/'){
            printf("%f", div(n1, n2));
        }
        else{
            printf("Invalid operator");
        }
    }

    if (op2 != '='){
        
    }
}
