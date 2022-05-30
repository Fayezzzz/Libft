/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:21:51 by mkhairul          #+#    #+#             */
/*   Updated: 2022/05/24 12:21:51 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	char	*ptr;

	ptr = dest;
	while (n-- > 0)
	{
		*ptr = c;
		ptr++;
	}
	return (dest);
}

void	ft_bzero(void *src, size_t n)
{
	ft_memset(src, 0, n);
}
