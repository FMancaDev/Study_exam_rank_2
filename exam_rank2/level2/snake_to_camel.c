#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int upper;

	i = 0;
	upper = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				upper = 1;
			}
			else
			{
				if (upper)
				{
					if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
					{
						argv[1][i] -= 32;
					}
					upper = 0;
				}
				write (1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
