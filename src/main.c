/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:40:53 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/09 17:54:41 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main(void)
{
	int	x;
	printf("%d\n", printf("V [%c] [%c] [%c]", 'x', '0', ' '));
	printf("%d\n", ft_printf("F [%c] [%c] [%c]", 'x', '0', ' '));
	ft_putchar_fd('\n', 1);
	printf("%d\n", printf("V [%s] [%s] [%s]", "XavierNiel", "", (char *)NULL));
	printf("%d\n", ft_printf("F [%s] [%s] [%s]", "XavierNiel", "", (char *)NULL));
	ft_putchar_fd('\n', 1);
	printf("%d\n", printf("V [%d] [%d] [%i] [%d] [%d]", 42, -42, 0, INT_MAX, INT_MIN));
	printf("%d\n", ft_printf("F [%d] [%d] [%i] [%d] [%d]", 42, -42, 0, INT_MAX, INT_MIN));
	ft_putchar_fd('\n', 1);
	printf("%d\n", printf("V [%u] [%u] [%u] [%u]", 42, 0, -1, UINT_MAX));
	printf("%d\n", ft_printf("F [%u] [%u] [%u] [%u]", 42, 0, -1, UINT_MAX));
	ft_putchar_fd('\n', 1);
	printf("%d\n", printf("V [%x] [%X] [%x] [%x] [%X]", 255, 255, 0, -1, 3054));
	printf("%d\n", ft_printf("F [%x] [%X] [%x] [%x] [%X]", 255, 255, 0, -1, 3054));
	ft_putchar_fd('\n', 1);
	// printf("%d\n", printf("V [%p] [%p]", &x, NULL));
	// printf("%d\n", ft_printf("F [%p] [%p]", &x, NULL));
	ft_putchar_fd('\n', 1);
	printf("%d\n", printf("V [%%] [100%%] [%%%d%%]", 5));
	printf("%d\n", ft_printf("F [%%] [100%%] [%%%d%%]", 5));
	ft_putchar_fd('\n', 1);
	// printf("%d\n", printf("V %c%s%d%i%u%x%X%%", 'a', "b", -1, 2, 3, 10, 11));
	// printf("%d\n", ft_printf("F %c%s%d%i%u%x%X%%", 'a', "b", -1, 2, 3, 10, 11));
	printf("%d\n", printf(""));
	printf("%d\n", ft_printf(""));
	return (0);
}
