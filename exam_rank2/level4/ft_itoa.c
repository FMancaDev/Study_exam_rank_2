/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:06:13 by fomanca           #+#    #+#             */
/*   Updated: 2025/11/07 17:13:18 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_len(int nb)
{
	int	i = 0;
	if (nb <= 0)
		i++;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*str;

	if (nbr == 0)
		return ("0\0");
	if (nbr == -2147483648)
		return ("-2147483648\0");
	len = count_len(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	str[--len] = '\0';
	while (nbr)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}













