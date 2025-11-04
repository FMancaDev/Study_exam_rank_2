/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:29:22 by fomanca           #+#    #+#             */
/*   Updated: 2025/11/04 16:29:36 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i = 0;
	int	start = 0;
	int	end = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			i++;
		}
		end = i;
		i--;
		while (i >= 0)
		{
			while (i >= 0 && argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				i--;
			}
			start = i + 1;
			while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				i--;
			}
			start = i + 1;
			end = start;
			while (argv[1][end] && argv[1][end] != ' ' && argv[1][end] != '\t')
			{
				write (1, &argv[1][end], 1);
				end++;
			}
			if (i > 0)
				write (1, " ", 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
