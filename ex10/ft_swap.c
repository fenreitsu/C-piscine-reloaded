/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 20:36:12 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/22 21:32:54 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* #include <stdio.h>

int	main(void)
{
	int a;
	int b;

	a = 4;
	b = -1;
	printf("%d\n", a);
	printf("%d\n\n", b);
	ft_swap(&a,&b);
	printf("%d\n", a);
	printf("%d\n\n", b);
} */