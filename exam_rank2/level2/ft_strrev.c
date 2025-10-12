char    *ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	i = 0;
	len = 0;
	while (str[len])
	{
		len++;
	}
	while (i < len - 1)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		i++;
		len--;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
	char s1[] = "Hello_World!";

	printf("Original: %s\n", s1);
	printf("Reversed: %s\n", ft_strrev(s1));
}
