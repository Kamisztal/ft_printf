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
	printf("%d\n", printf("V Coucou je suis la lettre %c", 'x'));
	printf("%d\n", ft_printf("F Coucou je suis la lettre %c", 'x'));
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('\n', 1);
	printf("%d\n", printf("V Coucou je suis %s", "XavierNiel"));
	printf("%d\n", ft_printf("F Coucou je suis %s", "XavierNiel"));
	return (0);
}
