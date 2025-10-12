#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int	i;
	int	len = 0;
	char 	*dst;

	while (src[len])
	{
		len++;
	}
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return NULL;
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

#include <stdio.h>

int	main()
{
	char s1[] = "this is a copied";
	char *dup;

	printf("verify: %s\n", ft_strdup(s1));
}
