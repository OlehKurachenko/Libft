/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/23 14:21:30 by okurache          #+#    #+#             */
/*   Updated: 2017/12/23 14:21:31 by okurache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int			ft_strnequ(const char *s1, const char *s2, int n)
{
	if (!s1 || !s2)
		return (0);
	while (--n >= 0)
		if (s1[n] != s2[n])
			return (0);
	return (1);
}