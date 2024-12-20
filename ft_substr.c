/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:37:01 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/08 15:43:02 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	tot_len;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || !len)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		tot_len = ft_strlen(s + start) + 1;
	else
		tot_len = len + 1;
	str = malloc(tot_len);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, tot_len);
	return (str);
}
