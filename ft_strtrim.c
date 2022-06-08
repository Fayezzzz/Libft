/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:48:22 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/01 13:48:22 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (*s1 && ft_strchr(set, *s1) != NULL)
	{
		++s1;
		--len;
	}
	while (len > 0 && ft_strrchr(set, s1[len - 1]) != NULL)
		--len;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len + 1);
	str[len] = '\0';
	return (str);
}
