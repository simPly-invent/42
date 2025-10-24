/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:55:31 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/23 00:35:47 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_calloc(size_t size_tab, size_t size)
{
	unsigned char		*ptr;

	if (size != 0 && size_tab > SIZE_T_MAX / size)
		return (NULL);
	ptr = malloc(size_tab * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (size_tab * size));
	return (ptr);
}
/*
int main(void)
{
    size_t  nmemb = 4;
    size_t  size = 4;
    void    *ptr;
    unsigned char *byte_ptr;
    size_t  i;

    // 🔹 Allocation avec calloc
    ptr = ft_calloc(nmemb, size);

    if (!ptr)
    {
        printf("Erreur : calloc a échoué !\n");
        return (1);
    }

    printf("nickel !! calloc(%zu, %zu) a alloué %zu octets.\n", 
    nmemb, size, nmemb * size);
    printf("Adresse du bloc : %p\n", ptr);

    // 🔹 Vérifier que tout est bien à zéro
    byte_ptr = (unsigned char *)ptr;
    for (i = 0; i < nmemb * size; i++)
    {
        if (byte_ptr[i] != 0)
        {
            printf("L'octet %zu n'est pas initialisé à 0 ! 
	    (valeur = %u)\n", i, byte_ptr[i]);
            free(ptr);
            return (1);
        }
    }

    printf("Nickel !!!!Tous les octets sont bien initialisés à 0.\n");

    // 🔹 Exddemple d'utilisation : convertir en int*
    int *tab = (int *)ptr;
    printf("Contenu des 4 entiers : %d %d %d %d\n", tab[0], 
    tab[1], tab[2], tab[3]);

    // 🔹 Libération
    free(ptr);
    printf("Mémoire libérée avec succès.\n");

void *p1 = ft_calloc(0, 10);
printf("ft_calloc(0,10) = %p\n", p1);
free(p1);

void *p2 = ft_calloc(10, 0);
printf("ft_calloc(10,0) = %p\n", p2);
free(p2);


size_t big = (SIZE_T_MAX / 2) + 1; // ou ta macro SIZE_T_MAX
void *p3 = ft_calloc(big, 2);
printf("Overflow attendu -> %p (doit être NULL)\n", p3);


int *t = ft_calloc(4, sizeof(int));
t[0] = 42; t[3] = -7;
printf("Écrit/Lu: %d %d\n", t[0], t[3]);
free(t);


    return (0);
}
*/
