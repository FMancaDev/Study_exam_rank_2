#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main()
{
	char	*s = "hello world!";
	char	*r = "p";

	printf("%zu\n", ft_strcspn(s, r));
}

// a funcao retorna o numero de indices ate encontrar reject
// ou s se nao encontrar reject
