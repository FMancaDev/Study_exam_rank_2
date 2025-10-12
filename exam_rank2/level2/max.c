int		max(int* tab, unsigned int len)
{
	if (len == 0)
	{
		return (0);
	}
	int	max = tab[0];
	unsigned int	i = 1;
	while (i < len)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
	return (max);
}

#include <stdio.h>

int	main()
{
	int	arr1[] = {34, 4, 768, -10, 1};

	printf("max arr1: %d\n", max(arr1, (sizeof(int))));
}
