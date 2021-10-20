/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainlibft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:47:45 by javigarc          #+#    #+#             */
/*   Updated: 2021/10/20 19:02:52 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int main () {
   int var1 = 'Z';
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

//	char *strmemset = "a cambiar esta string";
//	printf("\n** ft_memset **\n");
//	printf("%s\n",strmemset);
//	memset(strmemset,'s', 3);
//	printf("%s\n",strmemset);
//
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


	  return(0);
}
