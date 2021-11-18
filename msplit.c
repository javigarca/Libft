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
//	char	*s,*s2;
//	char 	c,c2;
	char	*t;
	char 	te;

//	s = "split  ||this|for|me|||||!|";
//	s1 = "         ";
//	s2 = "  ddfslfk skdflskfl skldfkslf ";
//	c1 = ' ';
//	c2 = '\0';
//	c = '|';
//	t = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	t="z";
	te = 'z';
//	printsplit(ft_split(s, c), s, c);
//	printsplit(ft_split(s1, c1), s1, c1);
//	printsplit(ft_split(s2, c1), s2, c1);
//	printsplit(ft_split(s2, c2), s2, c2);
	printsplit(ft_split(t, te), t, te);

	return (0);
	
}
