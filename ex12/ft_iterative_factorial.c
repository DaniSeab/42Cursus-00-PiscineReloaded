/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:05:32 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/01 22:18:07 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	if (nb > 12 || nb < 0)
		return (0);
	while (nb > 1)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}

/*
int	main(void)
{
	int	a = 0;
	
	printf("factorial de %d = %d\n", a, ft_iterative_factorial(a));
}

#include <stdio.h>
*/