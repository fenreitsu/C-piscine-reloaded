/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:30:58 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/24 18:18:58 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr_nb;
	int	arr_len;
	int	i;

	i = 0;
	if (min >= max)
		ptr_nb = NULL;
	else
	{
		arr_len = max - min;
		ptr_nb = malloc((arr_len) * sizeof(int));
		while (min < max)
		{
			ptr_nb[i] = min;
			i++;
			min++;
		}
	}
	return (ptr_nb);
}

/* #include <unistd.h>

void	ft_putnbr(int n)
{
	char	digit;

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
		ft_putnbr(n);
	}
	else
	{
		digit = (n % 10) + 48;
		if (n / 10 != 0)
			ft_putnbr((n / 10));
		write(1, &digit, 1);
	}
}

#include <stdio.h>
int	main(void)
{
	int	*arr;
	int	len;
	int	i;

	i = 0;
	arr = ft_range(8, 7);
	len = 8 - 7;
	while (i < len)
	{
		ft_putnbr(arr[i]);
		i++;
	}
	return (0);
	/////
	printf("%p", ft_range(8,7));
} */