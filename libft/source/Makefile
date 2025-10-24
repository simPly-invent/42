# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 22:31:30 by mobenais          #+#    #+#              #
#    Updated: 2025/10/23 22:58:18 by mobenais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---COMMANDE-DE-COMPILATION---#
CC = gcc
#FLAG POUR S'ASSURER QUE TOUT VA BIEN#
CFLAGS = -Wextra -Werror -Wall
#ON DEFINI LA/LES SOURCES(ICI LES FICHIER QUI SERONT PRESENT DANS LA LIBRARY APRES MAKE)#
SRC = $(wildcard *.c)
#-CREATION-DE-FICHIER-OBJET(A PARTIR DES FICHIER QUE L'ON A MIS DANS "SRC")-QUI-SERVIRONS-AU-LINKAGE-DANS-UN-SEUL-EXECUTABLE-OU-DANS-LA-UNE-LIBRARY#
OBJ = $(SRC:.c=.o)
#---JE DEFINI LA VARIABLE name qui correspondera au nom de la library ou de l'executable-#
NAME = libft.a
#ON PEUT CONCIDERER LA LIGNE DU BAS COMME LA FIONCTION MAIN QUI VA DEMARER TOUT LE PROCESSUS#
all: $(NAME)
#ICI NOUS METTONS TOUT LES OBJET DANS NAME EN OUBLIANT PAS LA COMMAND DU DESSOUS QUI CORRESPOND A "AR = ARCHIVE" -> "RCS = replace, create ET symbol(cree une table de symbole(liens)) " -> "$@ = $(NAME)" -> "$^ = $(OBJ)"#
$(NAME):$(OBJ)
	ar rcs $@ $^
#ON DONNE A LA COMMAND CLEAN LA POSSIBILITER DE SUPPRIMER LES FICHIER OBJET C'EST A DIRE ".o"#
clean:
	rm -rf $(OBJ)
#fclean ici permet de supprimer les fichier .o et le fichier archive cree ligne 26(ar rcs $@ $^)#
fclean:clean
	rm -rf $(NAME)
re: fclean all
#-re appelle la commande fclean pour supprimer les fichier .o et l'archive(library) et re appelle all pour re generer l'archive -#
