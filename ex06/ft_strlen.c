/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/12 13:46:14 by averheij       #+#    #+#                */
/*   Updated: 2019/09/12 13:49:06 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

int	main(void)
{
	return (0);
}
