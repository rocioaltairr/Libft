/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roperez <roperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:17:28 by roperez           #+#    #+#             */
/*   Updated: 2023/12/06 12:58:29 by roperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (i < len && big[i] != 0)
	{
		j = 0;
		while ((big[i + j] == little[j] && big[i + j] != 0) && i + j < len)
		{
			if (little[j + 1] == 0)
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
// #include "libft.h"

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	if (!little && little[i] == '\0')
// 		return ((char *) big);
// 	while (i < len && big[i])
// 	{
// 		j = 0;
// 		while (big[i + j] == little[j] && (i + j < len))
// 			j++;
// 		if (little[j] == '\0')
// 			return ((char *) (big + i));
// 		i++;
// 	}
// 	return (0);
// }
