/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:01:55 by dlima-se          #+#    #+#             */
/*   Updated: 2022/08/29 19:05:14 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a = 10;
	int b = 4;
	int	div;
	int mod;
	
	printf("a = %d b = %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d mod = %d\n", div, mod);
}
#include <stdio.h>
*/