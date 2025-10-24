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

#define WD_LEN 1000
#define	WD_NUM 1000

char **ft_split(char *str)
{
	char **arr;
	int	j;
	int	k;

	arr = (char **)malloc(sizeof(char *) * WD_NUM);
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	j = 0;
	while (*str != '\0')
	{
		if (*str > 32)
		{
			k = 0;
			arr[j] = (char *)malloc(sizeof(char) * WD_LEN);
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
