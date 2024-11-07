/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:59:46 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/03 21:20:14 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (s_len);
	i = 0;
	d_len = ft_strlen(dst);
	j = d_len;
	if (dstsize == 0 || dstsize <= d_len)
		return (s_len + dstsize);
	while (src[i] && i < dstsize - d_len - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (s_len + d_len);
}
