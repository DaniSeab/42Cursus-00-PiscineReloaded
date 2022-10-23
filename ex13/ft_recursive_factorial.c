/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:45:15 by dlima-se          #+#    #+#             */
/*   Updated: 2022/08/31 01:48:15 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fac;

	fac = nb;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
		fac *= ft_recursive_factorial(nb - 1);
	return (fac);
}

/*
int	main(void)
{
	int	a = 12;
	
	printf("factorial de %d = %d\n", a, ft_recursive_factorial(a));
}

#include <stdio.h>
*/
