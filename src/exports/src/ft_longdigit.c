/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okurache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 19:33:22 by okurache          #+#    #+#             */
/*   Updated: 2017/12/27 19:33:25 by okurache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		ft_longdigit(unsigned char digit)
{
	if (digit < 10)
		return ('0' + digit);
	return ('a' + digit - 10);
}
