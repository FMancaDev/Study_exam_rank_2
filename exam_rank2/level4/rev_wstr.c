/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:29:22 by fomanca           #+#    #+#             */
/*   Updated: 2025/11/17 17:39:49 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define NUM 5000
#define LEN 5000

void	ft_putstr(char *str)
{
	int i  = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

char	**split(char *str)
{
	char **arr;
	int  j;
	int  k;

	arr = (char **)malloc(sizeof(char *) * NUM);
	if (!arr)
		return NULL;
	j = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str != '\0')
	{
		if (*str > 32)
		{
			k = 0;
			arr[j] = (char *)malloc(sizeof(char) * LEN);
			if (!arr[j])
				return NULL;
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
	char	**arr = NULL;
	int i;

	i = 0;
	if (argc > 1)
	{
		arr = split(argv[1]);
	
		while (arr[i])
			i++;
		while (i--)
		{
			ft_putstr(arr[i]);
			if (i != 0)
				write (1, " ", 1);
			free(arr[i]);
		}
	}
	write (1, "\n", 1);
	free(arr);
	return (0);
}
