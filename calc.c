#include <stdio.h>

int main(){
    char operation;
    float one;
    float two;

    printf("Enter the operator (+ - * /): ");
    scanf("%c",&operation);

    printf("Enter two numbers(!!space key): ");
    scanf("%e %e",&one, &two);
    
    if(operation == '+')
    {
        printf("%f + %f = %f\n", one, two,(one + two));
    }
    else if(operation == '-')
    {
        printf("%f - %f = %f\n", one, two,(one - two));
    }
    else if(operation == '*')
    {
        printf("%f * %f = %f\n", one, two,(one * two));
    }
    else if(operation == '/')
    {
        printf("%f / %f = %f\n", one, two,(one / two));
    }
    return 0;
}


