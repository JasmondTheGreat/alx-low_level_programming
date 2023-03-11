/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: size of byte to copy
 * Return: destination string
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
