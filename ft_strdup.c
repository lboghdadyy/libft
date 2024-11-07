/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:05:15 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/03 18:29:54 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	string_len;
	char	*str;

	string_len = ft_strlen(s1);
	str = (char *)(malloc(sizeof(char) * string_len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < string_len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
