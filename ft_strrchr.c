/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 14:36:05 by mkhairul          #+#    #+#             */
/*   Updated: 2022/05/30 14:36:05 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int	i;

	i = ft_strlen(src);
	if (c >= 256)
		c -= 256;
	while (i >= 0)
	{
		if (src[i] == c)
			return ((char *)src + i);
		i--;
	}
	return (0);
}
