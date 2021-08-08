/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 09:46:33 by abernita          #+#    #+#             */
/*   Updated: 2021/08/01 10:00:51 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        ft_putchar(str);
        i++;
    }
}

int main(void)
{
    char str[] = {"Hello World!"};
    ft_putstr(str);
    write(1, "\n", 1);
    return 0;
}
