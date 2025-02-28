#include "get_next_line.h"
#include "ft_printf.h"

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("42.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return 1;
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}