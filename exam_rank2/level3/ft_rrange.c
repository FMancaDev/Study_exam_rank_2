/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:36:40 by fomanca           #+#    #+#             */
/*   Updated: 2025/10/21 17:43:40 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int		*ft_rrange(int start, int end)
{
	int	*res;
	int	len;
	int	i;

	len = ft_abs(end - start) + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i++] = end;
		if (end < start)
			end++;
		else if (end > start)
			end--;
	}
	return (res);
}

#include <stdio.h>

int	main()
{
	int	start = 4;
	int	end = 4;
	int	len = ft_abs(end - start) + 1;
	int	*re = ft_rrange(start, end);
	int	i = 0;

	while (i < len)
	{
		printf("%d ", re[i]);
		i++;
	}
	printf("\n");
}
