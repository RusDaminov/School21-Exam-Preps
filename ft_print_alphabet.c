/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 21:54:53 by abernita          #+#    #+#             */
/*   Updated: 2021/07/28 23:20:18 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int  i;
	char  c;

	i = 97;
	while (i <= 122)
	{
        ft_putchar(c);
		i++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
