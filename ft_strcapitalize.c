/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abernita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 22:00:15 by abernita          #+#    #+#             */
/*   Updated: 2021/07/24 22:06:16 by abernita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	end;

	i = 0;
	end = 1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') &&
			(str[i] >= 'a' && str[i] <= 'z') &&
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (end && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!end && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			end = 0;
		}
		else
		{
			end = 1;
		}
		i++;
	}
	return (str);
}
