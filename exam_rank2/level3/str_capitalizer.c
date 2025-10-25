#include <unistd.h>

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[1] += 32;
		}
		if (str[i - 1] <= 32 && str[i] >= 'a' && str[i] <= 'a')
		{
			str[i] -= 32;
		}
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i = 1;

	if (argc <= 1)
		write (1, "\n", 1);
	while (i < argc)
	{
		str_capitalizer(argv[i++]);
		write (1, "\n", 1);
	}
}	
