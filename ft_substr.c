/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:39:17 by mkhairul          #+#    #+#             */
/*   Updated: 2022/05/31 17:39:17 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len - 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= len && j < len)
		{
			str[j] = s[i]
				j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
