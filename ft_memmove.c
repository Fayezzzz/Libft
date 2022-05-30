/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:09:43 by mkhairul          #+#    #+#             */
/*   Updated: 2022/05/27 15:09:43 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*str1;
	char	*str2;

	str1 = (char *)dest;
	str2 = (char *)src;
	if (dest == src)
		return (dest);
	if (str1 < str2)
	{
		while (len--)
			str1[len] = str2[len];
		return (dest);
	}
	while (len--)
		*str1++ = *str2++;
	return (dest);
}
