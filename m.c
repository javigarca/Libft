#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	

	char s[] = {0, 1, 2 ,3 ,4 ,5};
  char *s1 = "bonjourno";
	char	t[]="tripouille";
	printf("\n mia:%s",(char *) ft_memchr(s, 2, 3));
	printf("\noficial:%s",(char *) memchr(s, 2, 3));
	printf("\n ssssssss: %s", s + 2); 
	printf("\n el otro **********");
	printf("\n mia:%s",(char *) ft_memchr(s, 2 + 256, 3));
	printf("\noficial:%s",(char *) memchr(s, 2 + 256, 3));
	printf("\n ssssssss: %s", s + 2); 
  printf("\n la otra ***********");
	printf("\n mia:%s",(char *) ft_memchr(s1, 'n', 2));
	printf("\noficial:%s",(char *) memchr(s1, 'n', 2));
	printf("\n el otro **********");
	printf(" \n------------------\n");
	printf(" Strchr m: %s \n", ft_strchr(t, 't' + 256));
	printf(" Strchr o: %s \n", strchr(t, 't' + 256));
		printf(" \n------------------\n");
	printf(" Strrchr m: %s \n", ft_strrchr(t, 't' + 256));
	printf(" Strrchr o: %s \n", strrchr(t, 't' + 256));
	write(1, "\n", 1);
	return (0);
}
