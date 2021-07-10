#include <stdio.h>

void division(float one, float two);

int main(){
    char operation;
    float one;
    float two;

    printf("Enter the operator (+ - * / %%): ");
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
        division(one, two);
    }
    return 0;
}

void division(float one, float two){
    if ((int)two == 0)
    {
        printf("divide by zero error not possible...");
    }
    else
    {
        printf("%f / %f = %f\n", one, two,(one / two));
    }
}
