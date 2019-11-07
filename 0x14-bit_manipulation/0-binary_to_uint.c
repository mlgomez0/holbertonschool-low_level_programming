#include<stdio.h>

/**
 *binary_to_uint - converst a binary number into an unsigned integer
 *@b:pointer to a string with 0 and 1
 *Return:An unsigned integer
 */


unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int j = 0;
	int m = 0;
	int k;
	unsigned int elem = 1;
	unsigned int ret = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		if (b[j] == '1')
		{
			for (k = 0; k < m; k++)
			{
				elem = elem * 2;
			}
			ret = ret + elem;
			elem = 1;
		}
		m++;
		if (!(b[j] == '0' || b[j] == '1'))
			return (0);
	}
	return (ret);
}
