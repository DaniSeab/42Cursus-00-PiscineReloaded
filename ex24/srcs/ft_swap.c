/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:59:01 by dlima-se          #+#    #+#             */
/*   Updated: 2022/08/29 19:01:59 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main(void)
{
	int	a = 2;
	int b = 8;
	
	printf("a = %d b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d b = %d\n", a, b);
}
#include <stdio.h>
*/