/**
 * get_sqrt_recursion - finds the square root of a number
 *
 * @number: number to get square root of
 * @incr_odd_num: increasing odd numbers
 *
 * Return: square root of the number
 */

int get_sqrt_recursion(int number, int incr_odd_num)
{
	number -= incr_odd_num;

	if (number < 0)
		return (-1);
	else if (number == 0)
		return ((incr_odd_num + 1) / 2);

	return (get_sqrt_recursion(number, incr_odd_num + 2));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get the square root of
 * Return: natural square root of 'n'
 */

int _sqrt_recursion(int n)
{
	return (n == 0 ? 0 : get_sqrt_recursion(n, 1));
}
