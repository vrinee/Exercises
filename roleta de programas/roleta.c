#include <stdio.h>
#include <stdlib.h>

int main (){

    int rng;

    rng = rand() % 10;

    switch (rng){

        case 0 :
            printf("Dart");
            break;
        case 1 :
            printf("Carbon");
            break;
        case 2 :
            printf("C++");
            break;
        case 3 :
            printf("CoffeScript"); // First language that was selected: Lua
            break;
        case 4 :
            printf("Python");
            break;
        case 5 :
            printf("Typescript");
            break;
        case 6 :
            printf("Oxygene");
            break;
        case 7 :
            printf("C#");
            break;
        case 8 :
            printf("Ruby");
            break;
        case 9 :
            printf("Rust");
            break;
        case 10 :
            printf("PHP");
            break;
        default :
            printf("Error");
            break;
    }
}