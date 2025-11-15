#include <unistd.h>
#include <stdlib.h>

#define NUM 5000
#define LEN 5000

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

char	**split(char *str)
{
	char **arr;
	int	j;
	int	k;

	arr = (char **)malloc(sizeof(char *) * NUM);
	if (!arr)
		return (NULL);
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	j = 0;
	while (*str != '\0')
	{
		if (*str > 32)
		{
			k = 0;
			arr[j] = (char *)malloc(sizeof(char) * LEN);
			if (!arr[j])
				return (NULL);
			while (*str > 32)
				arr[j][k++] = *str++;
			arr[j][k++] = '\0';
			j++;
		}
		else
			str++;
	}
	arr[j] = 0;
	return (arr);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		char **arr = split(argv[1]);
		int	i = 1;

		while (arr[i])
		{
			ft_putstr(arr[i]);
			write (1, " ", 1);
			free(arr[i]);
			i++;
		}
		ft_putstr(arr[0]);
		free(arr[0]);
		write (1, "\n", 1);
		free(arr);
	}
	else
		write (1, "\n", 1);
	return (0);
}
