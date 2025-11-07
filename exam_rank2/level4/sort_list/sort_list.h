/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fomanca <fomanca@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:25:29 by fomanca           #+#    #+#             */
/*   Updated: 2025/11/07 15:26:27 by fomanca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_LIST
#define SORT_LIST

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

#endif
