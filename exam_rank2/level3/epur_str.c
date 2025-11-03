/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:47:33 by fomanca           #+#    #+#             */
/*   Updated: 2025/11/03 15:51:19 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i = 0;

	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		while (argv[1][i])
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write (1, &argv[1][i], 1);
			}
			else if (argv[1][i + 1] != '\0' && argv[1][i + 1] != ' ' && argv[1][i + 1] != '\t')
			{
				write (1, " ", 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
