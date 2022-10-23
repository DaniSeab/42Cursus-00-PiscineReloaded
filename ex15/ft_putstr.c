/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:11:42 by dlima-se          #+#    #+#             */
/*   Updated: 2022/08/29 21:32:17 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

/*
int	main(void)
{
	char	c[] = "oi tudo bem?";
	
	ft_putstr(c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
#include <unistd.h>
*/