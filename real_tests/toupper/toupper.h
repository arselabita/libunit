/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:04:37 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 18:04:38 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOUPPER_H
# define TOUPPER_H

# define TEST_SUCCESS 0
# define TEST_FAILURE -1
# include "../../libft/libft.h"
# include "../../framework/libunit.h"

int	toupper_launcher(void);
int	toupper_basic_test(void);
int	toupper_symbol_test(void);
int	toupper_uppercase_test(void);
int	toupper_digit_test(void);

#endif
