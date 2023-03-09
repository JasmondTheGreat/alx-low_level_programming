/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get the square root of
 * Return: natural square root of 'n'
 */

int _sqrt_recursion(int n)
{
	int num = 0;

	if (n == 1)
		return (1);

	num++;
	return (1 + _sqrt_recursion(n - (1 + 2 * (num - 1))));
}
