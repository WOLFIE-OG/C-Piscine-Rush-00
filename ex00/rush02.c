/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glodenos <glodenos@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:20:03 by glodenos          #+#    #+#             */
/*   Updated: 2023/10/08 13:51:08 by glodenos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(char start, char hedge, char end, int length)
{
	int	index;

	index = 1;
	ft_putchar(start);
	while (index++ < (length - 1))
		ft_putchar(hedge);
	if (length > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		index;
	char	corner[4];
	char	hedge[4];

	index = 1;
	*((int*)((void*)(&corner))) = 0x41414343;
	*((int*)((void*)(&hedge))) = 0x42424242;
	if (x == 0 || y == 0)
		return ((void)0);
	ft_print_line(corner[3], hedge[3], corner[2], x);
	while (index++ < (y - 1))
		ft_print_line(hedge[0], ' ', hedge[2], x);
	if (y > 1)
		ft_print_line(corner[0], hedge[1], corner[1], x);
}
