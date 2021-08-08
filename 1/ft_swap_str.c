/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 10:23:42 by abernita          #+#    #+#             */
/*   Updated: 2021/08/01 10:25:46 by abernita         ###   ########.fr       */
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
        ft_putchar(str[i]);
        i++;
    }
}

void    ft_swap_tab(char *str, char *str1)
{
    int        i;
    char        tmp[15];

    i = 0;
    while (str[i] != '\0')
    {
        tmp[i] = str[i];
        str[i] = str1[i];
        str1[i] = tmp[i];
        i++;
        }
}

int main()
{
    char str[14] = {"Hello World!"};
    char str1[14] = {"Party up"};
    ft_putstr(str);
    write(1, "\n", 1);
    ft_putstr(str1);
	write(1, "\n", 1);
    ft_swap_tab(str, str1);
    ft_putstr(str);
    write(1, "\n", 1);
    ft_putstr(str1);
    return (0);
}
