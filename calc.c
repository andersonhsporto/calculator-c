#include <stdio.h>

void operation_calc(float one, float two, char operation);
void division(float one, float two);
void modulo(float one, float two);
int	ft_recursive_factorial(int nb);

int main()
{
    char operation;
    float one;
    float two;

    printf("Enter the operator (+ - * / %% !): ");
    scanf("%c",&operation);

    if(operation == '!')
    {
    printf("Enter number: ");
    scanf("%e",&one);
    printf("%2f! = %d\n", one, ft_recursive_factorial(one));
    }
    else
    {
    printf("Enter two numbers(!!space key): ");
    scanf("%e %e",&one, &two);
    operation_calc(one, two, operation);
    }
    return (0);
}

void operation_calc(float one, float two, char operation)
{
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
    else if(operation == '%')
    {
        modulo(one, two);
    }
}

void division(float one, float two)
{
    if ((int)two == 0)
    {
        printf("divide by zero error not possible...");
    }
    else
    {
        printf("%f / %f = %f\n", one, two,(one / two));
    }
}

void modulo(float one, float two)
{
    if ((int)two == 0)
    {
        printf ("divide by zero error not possible...");
    }
    else
        printf("%f %% %f = %d\n", one, two, ((int)one % (int)two));
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
