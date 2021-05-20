/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscalisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:19:30 by gscalisi          #+#    #+#             */
/*   Updated: 2021/04/02 13:40:58 by gscalisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *)dst;
	if (dst == 0 && src == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		s1[i] = *(unsigned char *)src;
		src++;
		i++;
	}
	return (dst);
}
