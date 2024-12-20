/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad <sbaghdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:45:57 by sbaghdad          #+#    #+#             */
/*   Updated: 2024/11/08 13:00:35 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	check;

	if (size == 0 || count == 0)
	{
		ptr = malloc(0);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	check = count * size;
	if (check / size != count)
		return (NULL);
	ptr = (malloc(check));
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
