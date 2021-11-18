#include "libft.h"
#include <stdio.h>

void	printsplit(char **sp, char *s, char c)
{
	int	len;
	int i;

	len = 0;
	i = 0;
	while (sp[len])
		len++;
	printf("\nCadena : %s", s);
	printf("\nDelimi : %c", c);
	while (i <= len )
	{
		printf("\n Posicion %i: %s", i, sp[i]);
		i++;
	}
	printf("\n ***************** \n");
}

int	main(void)
{
	char	*s,*s2;
	char 	c,c2;
	char	*t;
	char 	te;

	s = "split  ||this|for|me|||||!|";
//	s1 = "         ";
	s2 = "  ddfslfk skdflskfl skldfkslf ";
//	c1 = ' ';
	c2 = '\0';
	c = '|';
	t = "      split       this for   me  !       ";
	te = ' ';
	printsplit(ft_split(s, c), s, c);
//	printsplit(ft_split(s1, c1), s1, c1);
//	printsplit(ft_split(s2, c1), s2, c1);
	printsplit(ft_split(s2, c2), s2, c2);
	printsplit(ft_split(t, te), t, te);

	return (0);
	
}
