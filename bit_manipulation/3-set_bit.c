/**
 *set_bit - function that sets the value of a bit to 1 at a given index
 *@n: pointer to the value to be changed
 *@index: index of the bit to be changed
 *Return: 1 if it worked or -1 if an error ocurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n | (1 << (index));
		return (1);
}
