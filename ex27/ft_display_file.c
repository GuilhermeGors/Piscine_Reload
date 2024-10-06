/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:09:49 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/06 12:39:10 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_puterror(char *str)
{
	while (*str)
		write(2, str++, 1);
}

int	ft_display_file(char *filename, int BUFFER_SIZE)
{
	int		file;
	char	buffer[BUFFER_SIZE];
	int		bytes_read;

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		ft_puterror("Error opening file\n");
		return (-1);
	}
	bytes_read = read(file, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write (1, buffer, bytes_read);
	}
	if (bytes_read < 0)
	{
		ft_puterror("Error reading file\n");
		close(file);
		return (-1);
	}
	close(file);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	buffer_size;

	buffer_size = 1024;
	if (argc < 2)
	{
		ft_puterror("File name missing.");
		return (1);
	}
	if (argc > 2)
	{
		ft_puterror("Too many arguments.\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		ft_display_file(argv[i], buffer_size);
		i++;
	}
	return (0);
}
