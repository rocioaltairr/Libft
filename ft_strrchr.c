/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roperez <roperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:24:17 by roperez           #+#    #+#             */
/*   Updated: 2023/12/06 14:50:07 by roperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
		{
			j = i;
		}
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(&s[i]));
	else if (s[j] != (char)c)
		return (0);
	else
		return ((char *)(&s[j]));
}

// int	strlen_test(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// char	*ft_strrchr(const char *s, int c)
// {
// 	int	i;

// 	if (!s)
// 		return (NULL);
// 	i = strlen_test(s) - 1;
// 	while (s[i])
// 	{
// 		if (s[i] == (char)c)
// 		{
// 			return ((char *)(s + i));
// 		}
// 		i--;
// 	}
// 	return (NULL);
// }
