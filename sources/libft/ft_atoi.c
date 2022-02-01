/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktroude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:25:32 by ktroude           #+#    #+#             */
/*   Updated: 2022/01/19 17:09:01 by ktroude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	if (str[i] == '\0' || str[i] < '0' || str[i] > '9')
			error_txt();
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i] < '0' || str[i] > '9')
			error_txt();
		result = result * 10 + (str[i++] - 48);
	}
	return (result * sign);
}
