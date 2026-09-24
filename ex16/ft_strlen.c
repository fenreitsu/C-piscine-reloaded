/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:29:47 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/23 18:46:07 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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

int	main(void)
{
	char	*s;

	s = "Campus 42 $&/()";
	ft_putnbr(ft_strlen(s));
} */
