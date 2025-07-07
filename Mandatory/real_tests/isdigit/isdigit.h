/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:21:04 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:21:05 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISDIGIT_H
# define ISDIGIT_H
# define TEST_SUCCESS 0
# define TEST_FAILURE -1

# include "../../libft/libft.h"
# include "../../framework/libunit.h"

int	isdigit_launcher(void);
int	isdigit_basic_test(void);
int	alpha_input_test(void);
int	non_number_input_test(void);

#endif
