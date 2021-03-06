/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 18:37:01 by okurache          #+#    #+#             */
/*   Updated: 2017/12/21 18:37:08 by okurache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while (s1[i])
		i++;
	while (*s2 != 0)
	{
		s1[i] = *s2;
		i++;
		s2++;
	}
	s1[i] = 0;
	return (s1);
}
