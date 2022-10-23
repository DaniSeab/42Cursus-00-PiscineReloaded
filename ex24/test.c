/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:46:06 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/07 20:49:29 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./includes/ft.h"

int	main(void)
{
	char	c[] = "Testando Makefile OK\n";

	printf("strlen = %d\n", ft_strlen(c));
	ft_putstr(c);
}