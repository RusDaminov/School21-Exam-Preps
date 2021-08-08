/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 23:03:06 by abernita          #+#    #+#             */
/*   Updated: 2021/08/02 23:07:42 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void func(char *str)
{
  int i = 0;
  int res1;
  int res2;
  while (str[i] != '\0')
  {
    if (str[i] >= 97 && str[i]<= 110)
    {
      res1 = str[i] - 97;
      res2 = 122 - res1;
      ft_putchar(res2);
    }
    else if  (str[i] >= 65 && str[i]<= 78)
    {
      res1 = str[i] - 65;
      res2 = 90 - res1;
      ft_putchar(res2);
    }
    else if (str[i] >= 111 && str[i]<= 122)
    {
      res1 = 122 - str[i];
      res2 = 97 + res1;
      ft_putchar(res2);
    }
    else if  (str[i] >= 79 && str[i]<= 90)
    {
      res1 = 90 - str[i];
      res2 = 65 + res1;
      ft_putchar(res2);
    }
    else
    {
      ft_putchar(str[i]);
    }
    i++;
  }
}
 
int main(int argc, char **argv) 
{
  if (argc == 2)
    func(argv[1]);
  ft_putchar('\n');
  return 1;
}
