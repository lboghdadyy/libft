/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:45:31 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/03 11:45:17 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	find_when_it_ends(char *s1, char *set, char sign, size_t i)
{
	while (ft_strchr(set, s1[i]))
	{
		if (sign == '+')
			i++;
		else
			i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		i;
	char		*str;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (!ft_strncmp(s1, "", 1))
		return (ft_strdup(""));
	start = find_when_it_ends((char *)s1, (char *)set, '+', 0);
	while (s1[i])
		i++;
	end = find_when_it_ends((char *)s1, (char *)set, '-', i);
	if (start > end || end >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_substr(s1, start, (end - start) + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}
