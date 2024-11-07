/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:27:41 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/10/25 11:31:54 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cha;

	i = 0;
	cha = c;
	while (s[i])
		i++;
	if (c == 0)
		return ((char *)(s + i));
	while (i >= 0)
	{
		if (s[i] == cha)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
