/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:50:38 by dlima-se          #+#    #+#             */
/*   Updated: 2022/08/29 19:02:01 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/*
int	main(void)
{
	int	a = 0;
	ft_is_negative(a);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#include <unistd.h>
*/