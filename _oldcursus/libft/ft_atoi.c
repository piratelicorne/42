/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhuerta <mhuerta@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 18:13:54 by mhuerta           #+#    #+#             */
/*   Updated: 2020/10/07 19:54:39 by mhuerta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int		p;
	long	nb;

	nb = 0;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	p = (*s == '-') ? -1 : 1;
	(*s == '-' || *s == '+') ? s++ : s;
	while (ft_isdigit(*s))
	{
		nb = nb * 10 + (*s - '0');
		s++;
	}
	return (nb * p);
}