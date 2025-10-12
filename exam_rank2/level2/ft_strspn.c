#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j] && s[i] != accept[j])
		{
			j++;
		}
		if (!accept[j])
			return (i);
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main()
{
	char	*s1 = "12345abcdef";
	char 	*s2 ="12345";

	printf("found: %zu\n", ft_strspn(s1, s2));
}
