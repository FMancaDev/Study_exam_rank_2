/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:47:30 by fomanca           #+#    #+#             */
/*   Updated: 2025/11/10 16:48:26 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	r = 0;
	int	s = 1;

	while (str[i] == ' ' && (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			s *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}
	return (r * s);
}

void	putnbr(int nb)
{
	if (nb > 9)
		putnbr(nb / 10);
	write (1, &"0123456789"[nb % 10], 1);
}

int	main(int  argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
		
	int	i = 1;
	int	num = ft_atoi(argv[1]);

	while (i < 10)
	{
		putnbr(i);
		write (1, " x ", 3);
		putnbr(num);
		write (1, " = ", 3);
		putnbr(i * num);
		write (1, "\n", 1);
		i++;
	}
}
