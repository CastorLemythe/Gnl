/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:30:26 by lufranco          #+#    #+#             */
/*   Updated: 2017/11/13 16:59:29 by lufranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *tab)
{
	int	nb;
	int	i;
	int	n;

	nb = 0;
	i = 0;
	n = 0;
	while (tab[i] == '\n' || tab[i] == '\t' || tab[i] == '\v' ||
	tab[i] == '\f' || tab[i] == '\r' || tab[i] == ' ')
		i++;
	if (tab[i] == '-')
		n++;
	if (tab[i] == '-' || tab[i] == '+')
		i++;
	while (tab[i] > 47 && tab[i] < 58)
	{
		nb = nb * 10 + (tab[i] - '0');
		i++;
	}
	if (n == 1)
		return (-nb);
	return (nb);
}