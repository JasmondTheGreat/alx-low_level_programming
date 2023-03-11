/**
 * get_sqrt_recursion - finds the square root of a number
 *
 * @number: number to get square root of
 * @incr_odd_num: increasing odd numbers
 * @result: square root result
 *
 * Return: square root of the number
 */

int get_sqrt_recursion(int number, int incr_odd_num, result)
{
	if (number < 0)
		result = -1;
	else if (number == 0)
		return (0);

	return (1 + get_sqrt_recursion((number - incr_odd_num), (incr_odd_num + 2)));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get the square root of
 * Return: natural square root of 'n'
 */

int _sqrt_recursion(int n)
{
	const int isSquareRoot = get_sqrt_recursion(n, 1, 0);

	if (isSquareRoot == -1)
		return (-1);

	return (isSquareRoot);
}
