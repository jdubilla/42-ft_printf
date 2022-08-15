/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:03:00 by jdubilla          #+#    #+#             */
/*   Updated: 2021/12/18 16:13:49 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memset(char *s, int c, int n, char f)
{
	int		i;

	i = 0;
	if (f == 'X')
		c = 70;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
