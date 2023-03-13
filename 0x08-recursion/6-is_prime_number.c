/**
 * is_prime_number - check if a number is prime or not
 * @n: number to check
 * Return: 1 if 'n' is prime, otherwise, 0
 */

int check_prime(int n, int count, int i)
{
	if (n % i == 0)
		count += 1;

	if (n == i && count == 2)
		return (1);
	else if (n < 0 || count > 2)
		return (0);

	return (check_prime(n, count, i + 1));
}

int is_prime_number(int n)
{
	return (check_prime(n, 0, 1));
}
