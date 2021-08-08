/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 09:21:58 by abernita          #+#    #+#             */
/*   Updated: 2021/08/01 09:57:37 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_putchar(char c)
{
	int i;
	char arr[i];

	i = 0;
	while (arr[i] != '/0')
	{
		write(1, &c, 1);
		i++;
	}
}

char ft_putstr(char *arr)
{
	int i;

	i = 0;
	while (arr[i] != '\0')
	{
		write(1, arr[i], 1);
		i++;
	}
}

char main(void)
{
	char arr[15] = {"Hello World!"};
	ft_putstr(arr[15]);
	ft_putchar(arr[15]);
}
