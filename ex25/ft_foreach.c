/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 20:31:32 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/24 20:37:41 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (!tab || !f || length <= 0)
		return ;
	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
void	ft_putnbr(int num)
{
	char	digit;

	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
		ft_putnbr(num);
	}
	else
	{
		digit = (num % 10) + 48;
		if (num / 10 != 0)
			ft_putnbr((num / 10));
		write(1, &digit, 1);
	}
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 6};

	ft_foreach(arr, 5, &ft_putnbr);
	return (0);
}*/