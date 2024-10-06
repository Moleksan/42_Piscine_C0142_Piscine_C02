/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:58:39 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/26 17:38:58 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str [i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "alexandr";

// 	printf(" %s\n", str);
// 	ft_strupcase(str);
// 	printf(" %s\n", str);
// 	return (0);
// }
