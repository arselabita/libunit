/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:31:40 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 16:31:43 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISALPHA_H
# define ISALPHA_H
# define TEST_SUCCESS 0
# define TEST_FAILURE -1

# include "../../libft/libft.h"
# include "../../framework/libunit.h"

int	isalpha_launcher(void);
int	isalpha_basic_test(void);
int	isalpha_non_alpha_test(void);
int	number_input_test(void);

#endif
