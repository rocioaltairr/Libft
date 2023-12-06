/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roperez <roperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:35:20 by roperez           #+#    #+#             */
/*   Updated: 2023/12/06 12:57:24 by roperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*tmp;

	tmp = (void *)malloc(n * sizeof(tmp));
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*ptr1;
// 	unsigned char	*ptr2;
// 	unsigned char	*temp;

// 	ptr1 = (unsigned char *)dest;
// 	ptr2 = (unsigned char *)src;

// 	i = 0;

// 	if (ptr1 < ptr2)
// 	{
// 		while (i < n)
// 		{
// 			ptr1[i] = ptr2[i];
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		temp = (unsigned char *)malloc(n);
// 		if (temp == NULL)
// 			return (NULL);
// 		i = 0;
// 		while (i < n)
// 		{
// 			temp[i] = ptr2[i];
// 			i++;
// 		}
// 		i = 0;
// 		while (i < n)
// 		{
// 			ptr1[i] = temp[i];
// 			i++;
// 		}
// 		free(temp);
// 	}
// 	return (dest);
// }
