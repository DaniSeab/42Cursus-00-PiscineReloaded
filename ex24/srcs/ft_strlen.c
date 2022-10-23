/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:16:23 by dlima-se          #+#    #+#             */
/*   Updated: 2022/08/29 21:36:39 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/*
int	main(void)
{
	char	c[] = "";
	
	printf("strlen real = %lu\n", strlen(c));
	printf("ft_strlen = %d\n", ft_strlen(c));
}

#include <stdio.h>
#include <string.h>
*/