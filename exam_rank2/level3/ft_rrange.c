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

int		*ft_rrange(int start, int end)
{
	int	*result;
	int	i;
	int	len;

	len = abs(end - start) + 1;
	result = malloc(len * sizeof(int));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (end <=  start)
			result[i++] = end++;
		else if (end >= start)
			result[i++] = end--;
	}
	return (result);
}
