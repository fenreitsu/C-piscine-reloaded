/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:46:18 by reiascan          #+#    #+#             */
/*   Updated: 2026/09/23 19:15:01 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* #include <unistd.h>

void	ft_putnbr(int num)
{
	char	digit;

	if (num == -2147483648)
		write(1, "-2147483648", 1);
	else if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
		ft_putnbr(num);
	}
	else
	{
		digit = (num % 10) + '0';
		if (num / 10 != 0)
			ft_putnbr((num / 10));
		write(1, &digit, 1);
	}
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "hol";
	s2 = "hola";
	ft_putnbr(ft_strcmp(s1, s2));
	return (0);
} */
