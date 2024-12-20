/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:59:40 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/08 15:44:02 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	needle_len = ft_strlen(needle);
	if (!haystack && len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len)
	{
		if ((haystack[i] == needle[0]))
		{
			if (needle_len > len - i)
				return (NULL);
			if (!ft_strncmp(haystack + i, needle, needle_len))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
