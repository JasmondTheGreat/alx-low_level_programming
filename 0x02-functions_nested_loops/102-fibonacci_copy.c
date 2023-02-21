#include <stdio.h>

int main(void)
{
    int oldVal = 1;
    int currentVal = 2;
    int temp;
    int length = 48;
    for (int i = 0; i < length; i++)
    {
		if (i = 0)
			printf("%d, ", 1);
        if (i != (length - 1))
            printf("%d, ", currentVal);
        else
            printf("%d", currentVal);
        temp = oldVal;
        oldVal = currentVal;
        currentVal += temp;
    }
    putchar('\n');

    return (0);
}
