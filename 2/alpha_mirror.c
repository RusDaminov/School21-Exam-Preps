/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 20:16:48 by abernita          #+#    #+#             */
/*   Updated: 2021/08/02 21:00:53 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
  
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int main(int argc, char **argv)
{
	const char	tab[] = "zyxwvutsrqponmlkjihgfedcba";
	char		*str = argv[1];
	int 		i;

	i = 0;
	if (argc == 2)
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = tab[str[i] - 'a'];
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = tab[str[i] - 'A'] - 32;
			ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
