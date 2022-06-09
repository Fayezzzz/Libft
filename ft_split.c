/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:39:28 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/01 20:39:28 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (word == 0 && s[i] != c)
		{
			count++;
			word = 1;
		}
		else if (s[i] == c)
			word = 0;
		i++;
	}
	return (i);
}

static int	ft_charcount(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	str = ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = ft_charcount(&s[i], c);
			str[k++] = ft_substr(s, i, j);
			i += j;
		}
		else
			i++;
	}
	return (str);
}
