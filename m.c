#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	

//	char s[] = {0, 1, 2 ,3 ,4 ,5};
//  char *s1 = "bonjourno";
//	char	t[]="tripouille";
//	char *cad, *cad2;
/*	printf("\n mia:%s",(char *) ft_memchr(s, 2, 3));
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
	cad = ft_strtrim("   xxx   xxx", " x");
	cad2 = ft_strtrim("abcdba", "acb");
	printf("\n el 7 sale: %s", cad);
	printf("\n el 15 sale: %s", cad2);
	
	printf(" \n------------------\n");
	printf(" \n------------------\n");
	*/
	int itoa1, itoa2, itoa3;
	itoa1 = 166;
	itoa2 = -0;
	itoa3 = 156;
	printf("\nitoa1: %s", ft_itoa(itoa1));
	printf("\nitoa2: %s", ft_itoa(itoa2));
	printf("\nitoa3: %s", ft_itoa(itoa3));

//	write(1, "\n", 1);
	return (0);
}
