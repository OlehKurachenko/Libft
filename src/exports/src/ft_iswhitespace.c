/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 19:33:34 by okurache          #+#    #+#             */
/*   Updated: 2018/06/05 19:33:34 by okurache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

unsigned char	iswhitespace(const char character)
{
	if (character == ' ' || character == '\n' || character == '\t'
		|| character == '\v' || character == '\f' || character == '\r')
		return (1);
	return (0);
}
