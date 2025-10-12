#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;
	char 	*re = (char *)s1;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				return (re);
			}
			j++;
		}
		i++;
		re++;
	}
	return NULL;
}

#include <stdio.h>

int	main()
{
	char *s1 = "hello world";
	char *a1 = "aeiou";
    	char *res1 = ft_strpbrk(s1, a1);
   	printf("Test 1: %s (esperado: ello world)\n", res1);	
}
