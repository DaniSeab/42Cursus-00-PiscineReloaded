/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:27:36 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/01 23:57:00 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	i = 0;
	dest = (int *)malloc(len * (sizeof(int)));
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main()
{
	int a;
	int i;
	int min = 2;
	int max = 8;

	a = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", a[i]);
		i++;
	}
}
*/