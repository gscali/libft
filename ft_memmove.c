/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscalisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:18:19 by gscalisi          #+#    #+#             */
/*   Updated: 2021/04/04 19:52:43 by gscalisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	i = -1;
	if (dst == 0 && src == 0)
		return (NULL);
	if (s1 > s2)
	{
		while (len > 0)
		{
			s1[len - 1] = s2[len - 1];
			len--;
		}
	}
	else
	{
		while (++i < len)
			s1[i] = s2[i];
	}	
	return (dst);
}
