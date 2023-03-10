/**
 * is_prime_number - check if a number is prime or not
 * @n: number to check
 * Return: 1 if 'n' is prime, otherwise, 0
 */

int is_prime_number(int n)
{
	int i;
	int count = 0;


	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			count++;

		if (count == 2)
			break;
	}

	if (i == n)
		return (1);
	return (0);
}
