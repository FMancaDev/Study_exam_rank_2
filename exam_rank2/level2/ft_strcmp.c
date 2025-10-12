int    ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main()
{
	char str[] = "ola como";
	char str1[] = "ola comp";

	printf("compared: %d\n", ft_strcmp(str, str1));
}
