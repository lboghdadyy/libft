/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:33:44 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/04 14:13:18 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *s)
{
	unsigned long	number;
	int				sign;
	int				i;

	i = 0;
	sign = 1;
	number = 0;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		number = (number * 10) + (s[i] - 48);
		if (number > 9223372036854775807 && sign == 1)
			return (-1);
		if (number > 9223372036854775807 && sign == -1)
			return (0);
		i++;
	}
	return (number * sign);
}
