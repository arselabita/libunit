/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bigger_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:38:37 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:39:17 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

int	bigger_str_test(void)
{
	char			*str;
	unsigned int	expected_length;
	unsigned int	actual_length;

	str = "Lorem ipsum dolor sit amet consectetur\
	adipiscing elit quisque faucibus ex sapien vitaepellentesque sem placerat in id cursus mi \
	pretium tellus duis convallis \
	tempus leo eu aenean sed diam urna tempor \
	pulvinar vivamus fringilla lacus nec \
	metus bibendum egestas iaculis massa \
	nisl malesuada lacinia integer nunc posuere ut \
	hendrerit semper vel class aptent taciti sociosqu ad litora \
	torquent per conubia nostra inceptos himenaeos orci varius \
	natoque penatibus et magnis dis parturient montes nascetur \
	ridiculus mus donec rhoncus eros lobortis nulla molestie mattis \
	scelerisque maximus eget fermentum odio phasellus non purus \
	est efficitur.";
	expected_length = strlen(str);
	actual_length = ft_strlen(str);
	if (actual_length == expected_length)
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
