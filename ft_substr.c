/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:37:01 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/04 12:43:21 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	j = (size_t)start;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || !len)
		return (ft_strdup(""));
	if (len > ft_strlen(s + (size_t)start))
		str = (malloc(ft_strlen(s + start) + 1));
	else
		str = malloc (len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[j])
		str[i++] = s[j++];
	str[i] = '\0';
	return (str);
}
