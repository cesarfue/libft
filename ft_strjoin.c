/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesar <cesar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:20:13 by cesar             #+#    #+#             */
/*   Updated: 2023/11/14 15:52:14 by cesar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			i;
	size_t			j;
	char			*out;

	i = 0;
	j = 0;
	out = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!out)
		return (NULL);
	while (s1[i])
	{
		out[i] = s1[i];
		i++;
	}
	while (s2[j])
		out[i++] = s2[j++];
	out[i] = 0;
	return (out);
}

/* int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%s\n", ft_strjoin(argv[1], argv[2]));
	return (0);
} */
