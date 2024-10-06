/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moleksan <moleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:29:37 by moleksan          #+#    #+#             */
/*   Updated: 2023/07/26 21:33:34 by moleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 48) && (str[i] <= 57)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "160597";
// 	char	str1[] = "Alex";
// 	char	str2[] = "";

// 	printf("str %d\n", ft_str_is_numeric(str));
// 	printf("str1 %d\n", ft_str_is_numeric(str1));
// 	printf("str2 %d\n", ft_str_is_numeric(str2));
// 	return (0);
// }
