/**
 *clear_bit - function that sets the value of a bit to 0 at a given index
 *@n: pointer to the value to be changed
 *@index: index of the bit to be changed
 *Return: 1 if it worked or -1 if an error ocurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = *n;

	if (index > sizeof(n) * 8)
		return (-1);

	temp = (temp >> (index));
	if (temp & 1)
	{
		*n = (*n) ^ (1 << (index));
	}
		return (1);
}
