/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roperez <roperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:21:05 by roperez           #+#    #+#             */
/*   Updated: 2023/12/06 12:57:04 by roperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char) c)
		{
			return (((unsigned char *)s) + i);
		}
		i++;
	}
	return (0);
}

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!s)
// 		return (0);
// 	while (i < n)
// 	{
// 		if (*(unsigned char *)(s + i) == (unsigned char)c)
// 			return (void *)(s + i);
// 		i++;
// 	}
// 	return (0);
// }
