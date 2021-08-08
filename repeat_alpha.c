/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:27:19 by abernita          #+#    #+#             */
/*   Updated: 2021/08/05 16:00:08 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int rep_alp(char *str)
{
  int i;
  int j;
    
  i = 0;
  j = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      j = str[i] - 65;
      while (j >=0)
      {
        ft_putchar(str[i]);
        j--;
      }
    }
    else if (str[i] >= 'A' && str[i] <= 'Z')
    {
      j = str[i] - 97;
      while (j >=0)
      {
        ft_putchar(str[i]);
        j--;
      }
    }
    else
	{
        ft_putchar(str[i]);
	}
  }
  ft_putchar("/n");
  return(str[i]);
}

int  main()
{
  char str[14] = {"Hello world!"};
  rep_alp(str);
  return (0);
}
