# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: casomarr <casomarr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 14:55:13 by casomarr          #+#    #+#              #
#    Updated: 2022/11/30 14:55:13 by casomarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
#quand je voudrais mettre tous les fichiers d'un coup utiliser plutot la ligne suivante :
#FILES = $(wildcard *.c)
FILES = ft_isalpha.c	\
	ft_isalnum.c	\
	ft_isdigit.c	\
	ft_isascii.c	\
	ft_isprint.c	\
	ft_strlen.c	\
	ft_memset.c	\
	ft_bzero.c	\
	ft_memcpy.c	\
	ft_strlcpy.c	\
	ft_strlcat.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_strchr.c	\
	ft_strrchr.c	\
	ft_strncmp.c	\
	ft_memchr.c	\
	ft_memcmp.c	\
	ft_strnstr.c	\
	ft_atoi.c 	\
	ft_calloc.c	\
	ft_strdup.c	\
	ft_memmove.c 	\
	ft_substr.c	\
	ft_strjoin.c	\
	ft_strtrim.c	\
	ft_split.c	\
	ft_itoa.c	\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_putchar_fd.c	\
	ft_putstr_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\

OBJS = ${FILES:.c=.o}

FILES_BONUS = ft_lstadd_back.c 		\
		ft_lstadd_front.c 	\
		ft_lstdelone.c  	\
		ft_lstlast.c  		\
		ft_lstnew.c  		\
		ft_lstsize.c		\
		ft_lstiter.c		\
		ft_lstclear.c		\
		ft_lstmap.c			\

OBJS_BONUS = $(FILES_BONUS:.c=.o)
# explication de la ligne au dessus : take the variable value ${SRCS}, which is a string composed of words separated
#by spaces, and for each word, replace the suffix .c with .o

all: ${NAME}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}
# un fichier « *.a » est une archive créée avec la commande historique « ar » qui, en gros, concatène tous les fichiers
#passés les uns à la suite des autres. Donc, une lib statique sous UNIX est un gros fichier qui contient tous les *.o à
#l'intention du compilateur, sans autre forme de procès. Mais un fichier « *.a » peut contenir n'importe quoi. Ce n'est
#pas forcément en soit une bibliothèque.

#${NAME_BONUS} : $(OBJ_BONUS)
#	ar rc ${NAME_BONUS} $(OBJ_BONUS)

clean :
	rm -f ${OBJS}
#$(OBJS_BONUS)
#effacer obj_bonus ici?? car fclean efface tout ce que clean n efface pas??

#on clean les  .o

fclean : clean
	rm -f ${NAME} ${OBJS_BONUS}
#et non pas ${NAME_BONUS} car rien ne porte ce nom

re : fclean all
# clean will remove .o files. fclean will remove .o files and the binary. re will do fclean and re-make your binary.

bonus : $(OBJS_BONUS)
	ar rc ${NAME} ${OBJS_BONUS}

.o .c:
	#gcc -Wall -Werror -Wextra -I ${HEADER} -c $< -o ${<:.c = .o} #je pense que cette ligne est mal ecrite
	cc -Wall -Werror -Wextra ${OBJS} # ca marche!!!
	# je pense qu'on put enlever une partie apres header et aussi le -I avant header

#########PENSER A L EFFACER, C EST QU POUR TESTEUR UNIT##########
#so:
#	cc -nostartfiles -fPIC -Wall -Werror -Wextra $(FILES) $(FILES_BONUS)
#	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJ_BONUS)
	#cc -nostartfiles -fPIC -Wall -Werror -Wextra $(FILES)
	#gcc -nostartfiles -shared -o libft.so $(OBJS)

#################################################################

# $<: The filename of the first prerequisite.
# -I : directory

.Phony : all, clean, fclean, reMAKE, bonus
