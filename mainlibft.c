/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainlibft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:47:45 by javigarc          #+#    #+#             */
/*   Updated: 2021/10/21 11:36:56 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *scr, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
const char	*ft_strnstr(const char *hayctack, const char *needle, size_t len);
int			ft_atoi(const char *str);
const char	*ft_strchr(const char *str, int c);

int main () {
   int var1 = 'Q';
   int var2 = '4';
   int var3 = '\t';
   int var4 = ' ';

  printf("** ft_isalpha **\n");
   if(ft_isalpha(var1) ) {
      printf("var1 = |%c| is an alphabet\n", var1 );
   } else {
      printf("var1 = |%i| is not an alphabet\n", var1 );
      printf("var1 = |%c| is not an alphabet\n", var1 );
   }

   if(ft_isalpha(var2) ) {
      printf("var2 = |%c| is an alphabet\n", var2 );
   } else {
      printf("var2 = |%i| is not an alphabet\n", var2 );
      printf("var2 = |%c| is not an alphabet\n", var2 );
   }

   if(ft_isalpha(var3) ) {
      printf("var3 = |%c| is an alphabet\n", var3 );
   } else {
      printf("var3 = |%i| is not an alphabet\n", var3 );
      printf("var3 = |%c| is not an alphabet\n", var3 );
   }

   if(ft_isalpha(var4) ) {
      printf("var4 = |%c| is an alphabet\n", var4 );
   } else {
      printf("var4 = |%i| is not an alphabet\n", var4 );
      printf("var4 = |%c| is not an alphabet\n", var4 );
   }

   int digito1 = 'D';
   int digito2 = '0';
   printf("\n** ft_isdigit **\n");
   if( ft_isdigit(digito1) ) {
      printf("digito1 = |%c| is a digit\n", digito1 );
   } else {
      printf("digito1 = |%c| is not a digit\n", digito1 );
   }

   if( ft_isdigit(digito2) ) {
      printf("digito2 = |%c| is a digit\n", digito2 );
   } else {
      printf("digito2 = |%c| is not a digit\n", digito2 );
   }

   int alnum1 = 'd';
   int alnum2 = '2';
   int alnum3 = '\t';
   int alnum4 = ' ';
printf("\n** ft_isalnum **\n");

   if( ft_isalnum(alnum1) ) {
      printf("alnumr1 = |%c| is alphanumeric\n", alnum1 );
   } else {
      printf("alnum1 = |%c| is not alphanumeric\n", alnum1 );
   }

   if( ft_isalnum(alnum2) ) {
      printf("alnum2 = |%c| is alphanumeric\n", alnum2 );
   } else {
      printf("alnum2 = |%c| is not alphanumeric\n", alnum2 );
   }

   if( ft_isalnum(alnum3) ) {
      printf("alnum3 = |%c| is alphanumeric\n", alnum3 );
   } else {
      printf("alnum3 = |%c| is not alphanumeric\n", alnum3 );
   }

   if( ft_isalnum(alnum4) ) {
      printf("alnum4 = |%c| is alphanumeric\n", alnum4 );
   } else {
      printf("alnum4 = |%c| is not alphanumeric\n", alnum4 );
   }

//   int asc1 = 'á';
   int asc2 = '\t';
   int asc3 = ' ';
   printf("\n** ft_isascii **\n");
//	 if( ft_isascii(asc1) ) {
  //    printf("asc1 = |%c| is ascii\n", asc1 );
 //  } else {
  //    printf("asc1 = |%c| is not ascii\n", asc1 );
  // }
	 if( ft_isascii(asc2) ) {
      printf("asc2 = |%c| is ascii\n", asc2 );
   } else {
      printf("asc2 = |%c| is not ascii\n", asc2 );
  }
	  if( ft_isascii(asc3) ) {
      printf("asc3 = |%c| is ascii\n", asc3 );
   } else {
      printf("asc3 = |%c| is not ascii\n", asc3 );
   }
  int pr1 = 'k';
   int pr2 = '8';
   int pr3 = '\t';
   int pr4 = ' ';
    
   printf("\n** ft_isprint **\n");
   if( ft_isprint(pr1) ) {
      printf("pr1 = |%c| can be printed\n", pr1 );
   } else {
      printf("pr1 = |%c| can't be printed\n", pr1 );
   }
   
   if( ft_isprint(pr2) ) {
      printf("pr2 = |%c| can be printed\n", pr2 );
   } else {
      printf("pr2 = |%c| can't be printed\n", pr2 );
   }
   
   if( ft_isprint(pr3) ) {
      printf("pr3 = |%c| can be printed\n", pr3 );
   } else {
      printf("pr3 = |%c| can't be printed\n", pr3 );
   }
   
   if( ft_isprint(pr4) ) {
      printf("pr4 = |%c| can be printed\n", pr4 );
   } else {
      printf("pr4 = |%c| can't be printed\n", pr4 );
   }
	
	char *strleng = "esta frase es de 19";
   printf("\n ** ft_strlen **\n");
   printf("Según ft es de %zu, según la oficial es de %lu.\n", ft_strlen(strleng), strlen(strleng));

	char strmemset[22] = "A cambiar esta string";
	printf("\n** ft_memset **\n");
	printf("%s\n",strmemset);
	memset(strmemset,'&', 7);
	printf("%s\n",strmemset);

char source[35]={"Copiamos esto es la cadena source\0"};
	char sour[35]={"Copiamos esto es la cadena source\0"};
	char destino[20]={"esta123456789\0"};
	char dest[20]={"esta123456789\0"};

	unsigned int d, dd;
	d = 0;
	dd = 0;
printf("\n ** ft_strlcpy **\n");
    	printf("\n Original--%s-- a copiar --%s", destino, source);
    	d = ft_strlcpy(destino, source,15);
    	printf("\nDESPUES\n%s y el tamaño %u \n", destino, d);
  	printf("\n**********************************");
		printf("\n Original--%s-- a copiar --%s", dest, sour);
  	dd = strlcpy(dest, sour,15);
	printf("\nDESPUES\n%s y el tamaño %u\n", dest, dd);

	printf("\n ** ft_strlcat **\n");
	unsigned int res1, res2;
	unsigned int com1, com2;

	char string1[150] ={"Esta es una string\0"};
	char string2[25] ={" a la que añadimos esta\0"};
	char string3[14] ={" y esta otra.\0"};

	char s1[150] ={"Esta es una string\0"};
	char s2[25] ={" a la que añadimos esta\0"};
	char s3[14] ={" y esta otra.\0"};

	printf("Primero: %s \n ", string1);
	res1=ft_strlcat(string1,string2,150);
	printf("añadimos: %s \n ", string1);
	res2=ft_strlcat(string1,string3,150);
	printf("lo útlimo: %s \n ", string1);
	printf("y nos devuelve - %u - y - %u -\n", res1, res2);
	printf("S: %s \n ", s1);
	com1=strlcat(s1,s2,150);
	printf("S2: %s \n ", s1);
	com2=strlcat(s1,s3,150);
	printf("S3: %s \n ", s1);
    printf("y nos devuelve - %u - y - %u -\n", com1, com2);

printf("\n ** ft_toupper **\n");
	int toup = 'C';
	int toup1 = '\t';
	int toup2 = ' ';
	int	toup3 = 'd';

	printf("%c, con la mia -%c- con la oficial -%c- \n", toup, ft_toupper(toup), toupper(toup));
	printf("%c, con la mia -%c- con la oficial -%c- \n", toup1, ft_toupper(toup1), toupper(toup1));
	printf("%c, con la mia -%c- con la oficial -%c- \n", toup2, ft_toupper(toup2), toupper(toup2));
	printf("%c, con la mia -%c- con la oficial -%c- \n", toup3, ft_toupper(toup3), toupper(toup3));
	
	printf("\n ** ft_tolower **\n");
	int tolo = 'C';
	int tolo1 = '\t';
	int tolo2 = ' ';
	int	tolo3 = 'd';

	printf("%c, con la mia -%c- con la oficial -%c- \n", tolo, ft_tolower(tolo), tolower(tolo));
	printf("%c, con la mia -%c- con la oficial -%c- \n", tolo1, ft_tolower(tolo1), tolower(tolo1));
	printf("%c, con la mia -%c- con la oficial -%c- \n", tolo2, ft_tolower(tolo2), tolower(tolo2));
	printf("%c, con la mia -%c- con la oficial -%c- \n", tolo3, ft_tolower(tolo3), tolower(tolo3));
	 
	printf("\n ** ft_strnstr **\n");
	char	*str;
	char	*to_find;

	str = "Palcabras oso devolver string char int integral integerdos peluche";
	to_find = "string\0";
	printf("\n%s\n", ft_strnstr(str, to_find, 10));
	printf("%s\n****\n", strnstr(str, to_find, 10));
	to_find = "";
	printf("%s\n", ft_strnstr(str, to_find, 20));
	printf("%s\n****\n", strnstr(str, to_find, 20));
	to_find = "int";
	printf("%s\n", ft_strnstr(str, to_find, 40));
	printf("%s\n****\n", strnstr(str, to_find, 40 ));
	to_find = "char";
	printf("%s\n", ft_strnstr(str, to_find, 60));
	printf("%s\n****\n", strnstr(str, to_find, 60));
	to_find = "intege";
	printf("%s\n", ft_strnstr(str, to_find, 100));
	printf("%s\n****\n", strnstr(str, to_find, 100));
	to_find = "cabra";
	printf("%s\n", ft_strnstr(str, to_find, 10));
	printf("%s\n****\n", strnstr(str, to_find, 10));
	
	printf("\n ** ft_atoi **\n");
	char sa1[] = "++1234ab567"; // -
	char sa2[] = "+2147483648";   // -
	char sa3[] = "-a22";           // + Empty
	char sa4[] = "+2147483647";// -
	char sa5[] = "42\n";       // -
	char sa6[] = "-23420asdfasf";
	char sa7[] = "   -14545";
	char sa8[] = "--a";
	char sa9[] = "++--42\n";       //
	char sa10[] = "42\n";       //

	int result, resultmio;

    result = atoi(sa1);
    resultmio = ft_atoi(sa1);
	printf("1-Result: %d\n", result);
	printf("Resmio: %d\n", resultmio);
    result = atoi(sa2);
    resultmio = ft_atoi(sa2);
	printf("2-Result: %d\n", result);
	printf("Resmio: %d\n", resultmio);
    result = atoi(sa3);
    resultmio = ft_atoi(sa3);
	printf("3-Result: %d\n", result);
	printf("Resmio: %d\n", resultmio);
    result = atoi(sa4);
    resultmio = ft_atoi(sa4);
	printf("4-Result: %d\n", result);
	printf("Resmio: %d\n", resultmio);
    result = atoi(sa5);
    resultmio = ft_atoi(sa5);
	printf("5-Result: %d\n", result);
	printf("Resmio: %d\n", resultmio);
    result = atoi(sa6);
    resultmio = ft_atoi(sa6);
	printf("6-Result: %d\n", result);
	printf("Resmio: %d\n", resultmio);
    result = atoi(sa7);
    resultmio = ft_atoi(sa7);
	printf("7-Result: %d\n", result);
	printf("Resmio: %d\n", resultmio);
    result = atoi(sa8);
    resultmio = ft_atoi(sa8);
	printf("8-Result: %d\n", result);
	printf("Resmio: %d\n", resultmio);
    result = atoi(sa9);
    resultmio = ft_atoi(sa9);
	printf("9-Result: %d\n", result);
	printf("Resmio: %d\n", resultmio);
    result = atoi(sa10);
    resultmio = ft_atoi(sa10);
	printf("10-Result: %d\n", result);
	printf("Resmio: %d\n", resultmio);

	printf("\n ** ft_strchr **\n");
	char	*strchr;
	int 	tofind;

	strchr = "Palcabras oso devolver stntegerdos peuBche\0";
	tofind = '\0';
	printf("\n%s\n", ft_strchr(strchr, tofind));
//	printf("%s\n****\n", strchr(strchr, tofind));
	tofind = 'o';
	printf("%s\n", ft_strchr(strchr, tofind));
//	printf("%s\n****\n", strchr(strchr, tofind));
	tofind = 'i';
	printf("%s\n", ft_strchr(strchr, tofind));
//	printf("%s\n****\n", strchr(strchr, tofind));
	tofind = 'c';
	printf("%s\n", ft_strchr(strchr, tofind));
//	printf("%s\n****\n", strchr(strchr, tofind));
	tofind = 'B';
	printf("%s\n", ft_strchr(strchr, tofind));
//	printf("%s\n****\n", strchr(strchr, tofind));

return(0);
}
