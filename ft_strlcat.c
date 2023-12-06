/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roperez <roperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:36:59 by roperez           #+#    #+#             */
/*   Updated: 2023/12/06 16:09:18 by roperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;

	if (!dst || !src)
		return (0);
	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size < dest_size)
		return (src_size + size);
	else
	{
		dst = dst + dest_size;
		ft_strlcpy(dst, src, size - dest_size);
		return (src_size + dest_size);
	}
}
