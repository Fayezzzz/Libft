/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:48:53 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/03 17:48:53 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	l;

	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (--l > 0)
		str[l] = f(l, s[l]);
	return (str);
}
