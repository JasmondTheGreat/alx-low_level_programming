#include <stdio.h>

/**
 * main - prints largest prime factor of a number
 *
 * Return: 0
 */

int main(void)
{
    int i, primeFac;
    long number;

    number = 612852475143;
    primeFac = 1;

    for (i = 2; i * i <= number; i++)
    {
        while (number % i == 0)
        {
            primeFac = i;
            number /= i;
        }
    }

    if (number > 1)
    {
        primeFac = number;
    }

    printf("%d\n", primeFac);

    return (0);
}

