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
	unsigned char	s;

	s = (unsigned char)c;
	while (n-- != 0)
	{
		if (*(unsigned char *)str == s)
			return ((void *)str);
		str++;
	}
	return (0);
}
