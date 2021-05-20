/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscalisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:31:45 by gscalisi          #+#    #+#             */
/*   Updated: 2021/04/02 23:55:11 by gscalisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s1;
	size_t	i;

	s1 = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
