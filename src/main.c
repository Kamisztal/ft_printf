/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:40:53 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/09 16:53:30 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main(void)
{
	printf("%d\n", printf("Coucou je suis a %d", 320));
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('\n', 1);
	printf("%d\n", ft_printf("Coucou je suis a %d", 320));
	return (0);
}
