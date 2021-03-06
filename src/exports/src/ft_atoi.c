/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/23 11:30:33 by okurache          #+#    #+#             */
/*   Updated: 2017/12/23 11:30:53 by okurache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int			ft_atoi(const char *str)
{
	unsigned		i;
	long long		res;
	bool			is_negative;

	i = 0;
	res = 0;
	is_negative = false;
	while (ft_iswhitespace(str[i]))
		++i;
	if (str[i] == '-')
	{
		is_negative = true;
		++i;
	}
	else if (str[i] == '+')
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (int)str[i] - (int)'0';
		++i;
	}
	return ((is_negative) ? -res : res);
}
