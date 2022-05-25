/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:05:06 by mkhairul          #+#    #+#             */
/*   Updated: 2022/05/24 09:05:06 by mkhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	signs;
	int	i;
	int	temp_num;

	signs = 1;
	i = 0;
	temp_num = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 45 || (str[i] == 43))
	{
		if (str[i] == 45)
			signs *= -1;
		i++;
	}
	if (str[i] == 45 || (str[i] == 43))
		return (0);
	while (str[i] >= 48 && str[i] <= 57)
	{
		temp_num = str[i] + (temp_num * 10) - '0';
		i++;
	}
	return (temp_num * signs);
}
