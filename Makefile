# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/08 00:58:17 by aghalmi           #+#    #+#              #
#    Updated: 2025/11/10 20:07:34 by aghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variable

CC = cc
CFLAGS = -Wall -Wextra -Werror -I ./
SRCS = ft_isalpha.c ft_isascii.c ft_atoi.c ft_bzero.c ft_calloc.c \
	ft_isalnum.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c \
	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_split.c \
	ft_strtrim.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	ft_lstmap.c

RM = rm -f

OBJ = $(SRCS:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)
NAME = libft.a

all: $(NAME) $(BONUS_OBJ)

# creation de la lib
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# compil de fichier bonus
bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

# compil des .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# nettoyage de fichier objet
clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

#nettoyage complet
fclean: clean 
	$(RM) $(NAME) $(BONUS_OBJ)

#re compil complete
re: fclean all

.PHONY: all clean fclean re bonus