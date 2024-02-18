/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:12:28 by cesar             #+#    #+#             */
/*   Updated: 2024/02/17 16:20:22 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	quit(char *quit_msg)
{
	write(STDERR_FILENO, quit_msg, ft_strlen(quit_msg));
	exit(EXIT_FAILURE);
}
