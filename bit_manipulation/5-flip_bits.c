/**
 *flip_bits - function that returns the number of bits you would need
 *to flip to get to one number to another
 *@n: first number
 *@m: second number
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	n = n ^ m;

	while (n > 0)
	{
		if (n & 1)
			count++;
		n = n >> 1;
	}
	return (count);
}
