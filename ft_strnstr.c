/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:16:01 by mkhairul          #+#    #+#             */
/*   Updated: 2022/05/30 11:16:01 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length;

	i = 0;
	length = ft_strlen(s2);
	if (s2[0] == '\0')
		return ((char *)s1);
	while (i < len && s1[i] != '\0')
	{
		j = 0;
		while (s1[i + j] != '\0' && s2[j] != '\0' && s1[i + j] == s2[j]
			&& (i + j < len))
			j++;
		if (j == length)
			return ((char *)s1 + i);
		i++;
	}
	return (0);
}
