/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:24:10 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/26 17:40:00 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			str [i] = str[i] - ('A' - 'a');
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "ALEXANDR";

// 	printf(" %s\n", str);
// 	ft_strlowcase(str);
// 	printf(" %s\n", str);
// 	return (0);
// }
