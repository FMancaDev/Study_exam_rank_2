/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:45:23 by fomanca           #+#    #+#             */
/*   Updated: 2025/11/05 13:49:04 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int		*ft_range(int start, int end)
{
	int	*res;
	int	len;
	int	i;

	len = ft_abs(start - end) + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i++] = start;
		if (start < end)
			start++;
		else if (start > end)
			start--;
	}
	return (res);
}

#include <stdio.h>

int	main()
{
	int	start = 10;
	int	end = 35;
	int	len = ft_abs(start - end) + 1;
	int	*res = ft_range(start, end);
	int	i = 0;

	while (i < len)
	{
		printf("%d ", res[i]);
		i++;
	}
	printf("\n");
}
