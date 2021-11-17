#include "libft.h"

int	main(void)
{
	char	*s, *s1, *s2;
	char 	c,c1,c2;

	s = "iidividir por las ies.ii";
	s1 = "         ";
	s2 = "      ddfslfk skdflskfl skldfkslf  ";
	c1 = ' ';
	c2 = '\0';
	c = 'i';
	ft_split(s, c);
	ft_split(s1, c1);
	ft_split(s2, c1);
	ft_split(s2, c2);

	return (0);
	
}
