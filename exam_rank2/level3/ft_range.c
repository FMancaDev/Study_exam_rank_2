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

int		*ft_range(int start, int end)
{
	int	*result;
	int	len;
	int	i;

	len = abs(start - end) + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (start <= end)
			result[i++] = start++;
		else if (start >= end)
				result[i++] = start--;
	}
	return (result);
}
