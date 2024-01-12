/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodenos <glodenos@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:21:44 by glodenos          #+#    #+#             */
/*   Updated: 2023/10/08 15:48:42 by glodenos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_atoi(char *str)
{
	int	value;

	value = 1;
	while (*str == ' ' || *str == '+' || *str == '-' || *str == '\n'
		|| *str == '\r' || *str == '\t')
	{
		if (*str == ' ' || *str == '+')
			value = 1;
		else
			value = -1;
		++str;
	}
	if (*str < 0x30 || *str > 0x39)
		return (0);
	value *= (*str - 0x30);
	while (*++str > 0x2F && *str < 0x3A)
		value *= 10 + *str - 0x30;
	return (value);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		rush(5, 5);
	else if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
