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
	if (strlen_launcher() == -1)
		code = 1;
	write(1, "\n", 1);
	if (atoi_launcher() == -1)
		code = 1;
	write(1, "\n", 1);
	if (isalpha_launcher() == -1)
		code = 1;
	write(1, "\n", 1);
	if (isdigit_launcher() == -1)
		code = 1;
	write(1, "\n", 1);
	if (tolower_launcher() == -1)
		code = 1;
	write(1, "\n", 1);
	if (toupper_launcher() == -1)
		code = 1;
	return (code);
}
