/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mstrlcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javigarc <javigarc@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:39:26 by javigarc          #+#    #+#             */
/*   Updated: 2021/11/02 14:06:52 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
size_t ft_strlcpy(char *dest, const char *src, size_t size);

int main(void)
{
	////////////////////////////////////////////
//	char source[35]={"Copiamos esto es la cadena source\0"};
//	char sour[35]={"Copiamos esto es la cadena source\0"};
	char destino[20]={"esta123456789\0"};
//	char dest[20]={"esta123456789\0"};
//	char *vacia1="";
	char *vacia="AA";
//	char *vacia2=NULL;

	unsigned int d, dd;
	d = 0;
	dd = 0;
	printf("\n ** NULA ft_strlcpy **\n");
//   printf("\n Original--%s-- a copiar --%s", vacia1, destino);
 //   d = ft_strlcpy(vacia1, destino,15);
  //  printf("\nDESPUES\n%s y el tamaño %u \n", vacia1, d);
  	printf("\n**********************************");
	printf("\n Original--%s-- a copiar --%s", destino,vacia);
  	dd = strlcpy(destino,vacia,15);
	printf("\nDESPUES\n%s y el tamaño %u\n", destino, dd);
	printf("\n ** VACIA ft_strlcpy **\n");
//   printf("\n Original--%s-- a copiar --%s", destino, vacia1);
 // d = ft_strlcpy(destino, vacia1,15);
 // printf("\nDESPUES\n%s y el tamaño %u \n", destino, d);
  //	printf("\n**********************************");
//	/printf("\n Original--%s-- a copiar --%s", dest, vacia1);
  //	dd = strlcpy(dest, vacia1,15);
//	printf("\nDESPUES\n%s y el tamaño %u\n", dest, dd);


	return (0);
}
