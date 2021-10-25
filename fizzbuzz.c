/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:13:39 by abernita          #+#    #+#             */
/*   Updated: 2021/10/25 11:13:46 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int n)
{
	int c;
	c = 0;

	if (n / 10 > 0)
		ft_putnbr(n / 10);
	c = n % 10 + 48;
	write(1, &c, 1);
}

int main(void)
{
	int i;
	char *s;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			write(1, "FizzBuzz\n", 9);
		} else if (i % 5 == 0) {
			write(1, "Buzz\n", 5);
		} else if (i % 3 == 0){
			write(1, "Fizz\n", 5);
		} else {
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return 0;
}
