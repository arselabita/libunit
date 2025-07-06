/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:22:22 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:22:23 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <unistd.h>

int	main(void)
{
	int	code;

	code = 0;
	strlen_launcher();
	write(1, "\n", 1);
	printf_launcher();
	write(1, "\n", 1);
	atoi_launcher();
	write(1, "\n", 1);
	isalpha_launcher();
	write(1, "\n", 1);
	isdigit_launcher();
	write(1, "\n", 1);
	tolower_launcher();
	write(1, "\n", 1);
	toupper_launcher();
	write(1, "\n", 1);
	return (code);
}
