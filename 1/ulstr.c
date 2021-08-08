/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:32:39 by abernita          #+#    #+#             */
/*   Updated: 2021/08/02 18:32:42 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int        main(int argc, char *argv[])
{
    int        i;
    char    letter;

    i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            letter = argv[1][i];
            if (argv[1][i] >= 'A' && 'Z' >= argv[1][i])
                letter += 32;
            if (argv[1][i] >= 'a' && 'z' >= argv[1][i])
                letter -= 32;
            write(1, &letter, 1);
            i += 1;
        }
    }
    write(1, "\n", 1);
    return (0);
}
