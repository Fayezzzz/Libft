/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 11:33:38 by mkhairul          #+#    #+#             */
/*   Updated: 2022/05/27 11:33:38 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*s;
	size_t		i;

	s = (const char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
