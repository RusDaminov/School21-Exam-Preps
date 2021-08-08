/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 15:56:01 by abernita          #+#    #+#             */
/*   Updated: 2021/08/01 16:39:37 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fw(char *str)
{
  int i;
  char c;
  
  i = 0;
  while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
  {
    write (1, &str[i], 1);
    i++;
  }
}

char	main(int i, char **c)
{
  char str[14] = {"Hello world!"};
  ft_fw(str);
  return 0;
}
