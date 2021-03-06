/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:14:53 by mkhairul          #+#    #+#             */
/*   Updated: 2022/05/31 15:14:53 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*pointer;

	if ((n > 65535 || size > 65535) && ((size_t)-1 / n) < size)
		return (NULL);
	pointer = (void *)malloc(n * size);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, n * size);
	return (pointer);
}
