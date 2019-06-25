#include "libft.h"

int	main()
{
	int		i = 555;
	char	c = 'P';
	int		nbr[5] = {1, 2, 3, 4, 5};
	char	*str = "maman j'ai peur";

	ft_print_memory(&i, sizeof(i));
	ft_print_memory(&c, sizeof(c));
	ft_print_memory(nbr, sizeof(nbr));
	ft_print_memory(str, sizeof(str));
	return (0);
}
