/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:31:45 by mkhairul          #+#    #+#             */
/*   Updated: 2022/05/24 12:31:45 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
