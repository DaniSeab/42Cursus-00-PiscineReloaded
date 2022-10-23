/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:24:38 by dlima-se          #+#    #+#             */
/*   Updated: 2022/08/31 01:27:55 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	c1[] = " ";
	char	c2[] = " ";
	
	printf("strcmp real = %d\n", strcmp(c1, c2));
	printf("ft_strcmp  = %d\n", ft_strcmp(c1, c2));
}

#include <stdio.h>
#include <string.h>

*/