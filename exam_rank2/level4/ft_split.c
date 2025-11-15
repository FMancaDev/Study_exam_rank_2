/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:47:14 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/24 15:52:25 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define NUM 5000
#define LEN 5000

char **ft_split(char *str)
{
	char **arr;
	int j;
	int k;

	arr = (char **)malloc(sizeof(char *) * NUM);
	if (!arr)
		return NULL;
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
				return NULL;
			while (*str > 32)
				arr[j][k++] = *str++;
			arr[j][k] = '\0';
			j++;
		}
		else
			str++;
	}
	arr[j] = 0;
	return (arr);
}

#include <stdio.h>

int	main()
{
	char	**tab = ft_split(" ola como estas            hj ola jnj");
	int	i = 0;

	while (tab[i])
	{
		printf("[%s]\n", tab[i]);
		i++;
	}

}
