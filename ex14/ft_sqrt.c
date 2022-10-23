/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:55:05 by dlima-se          #+#    #+#             */
/*   Updated: 2022/08/30 18:52:23 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	if (nb <= 0)
		return (0);
	while (sqr * sqr <= nb)
		sqr++;
	if (((sqr - 1) * (sqr - 1)) == nb)
		return (sqr - 1);
	else
		return (0);
}

/*
int	main(void)
{
	int	a = 1;
	
	printf("Raiz quadrada de %d = %d\n", a, ft_sqrt(a));
}
#include <stdio.h>
*/