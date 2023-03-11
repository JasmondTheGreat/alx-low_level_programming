/**
 * _abs - returns the absolute value of an integer
 *
 * @n: number parameter to check
 *
 * Return: the absolute value (+ve only)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}

	return (n);
}
