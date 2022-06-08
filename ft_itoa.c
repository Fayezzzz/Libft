/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:48:35 by mkhairul          #+#    #+#             */
/*   Updated: 2022/06/01 20:48:35 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int n)
{
	unsigned int	len;

	len = 1;
	if (n < 0)
	{
		if (n == INT_MIN)
			n++;
		++len;
		n *= -1;
	}
	while (n > 0)
	{
		++len;
		n /= 10;
	}
	return (len);
}

static char	*ft_putnbr(char *result, int nb)
{
	if (nb < 0)
	{
		*result = '-';
		result++;
		if (nb == INT_MIN)
		{
			*result++ = '2';
			nb += 2000000000;
		}
		nb *= -1;
	}
	while (nb > 9)
	{
		result = ft_putnbr(result, (nb / 10));
		*result++ = (nb % 10) + '0';
		nb = -1;
	}
	if (nb < 10 && nb >= 0)
		*result++ = nb + '0';
	return (result);
}

char	*ft_itoa(int nbr)
{
	char	*itoa;
	char	*r;

	itoa = ft_calloc((ft_counter(nbr) + 1), sizeof(char));
	if (!itoa)
		return (NULL);
	r = itoa;
	itoa = ft_putnbr(itoa, nbr);
	*itoa = '\0';
	return (r);
}
