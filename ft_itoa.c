/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscalisi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 08:10:13 by gscalisi          #+#    #+#             */
/*   Updated: 2021/04/02 22:40:22 by gscalisi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_put(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_bof(long int nb, char *str, int i)
{
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	str[i] = '\0';
	i--;
	while (nb > 0)
	{
		str[i] = 48 + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	long int	nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_put(n);
	str = (malloc(sizeof(char) * (i + 1)));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = 48;
		str[1] = '\0';
		return (str);
	}
	nb = n;
	str = ft_bof(nb, str, i);
	return (str);
}
