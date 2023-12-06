/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roperez <roperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:16:05 by roperez           #+#    #+#             */
/*   Updated: 2023/12/06 15:41:55 by roperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_num(int i, const char *nptr)
{
	int	nums;

	nums = 0;
	while (nptr[i] != '\0')
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			nums = nums * 10 + nptr[i] - 48;
		else
			break ;
		i++;
	}
	return (nums);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	minus = 1;
	result = 0;
	while (nptr[i] == ' ' || nptr[i] == '\f'
		|| nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\t' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			minus = -1;
		i++;
	}
	result = get_num(i, nptr);
	return (minus * result);
}
