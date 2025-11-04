/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:19:03 by fomanca           #+#    #+#             */
/*   Updated: 2025/11/03 15:29:32 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char bit = 0;

	while (i--)
	{
		bit = (octet >> i & 1) + 48;
		write (1, &bit, 1);
	}
}
