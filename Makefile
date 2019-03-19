# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/18 05:06:34 by qpeng             #+#    #+#              #
#    Updated: 2019/03/18 23:17:54 by qpeng            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =				libfts.a

ASM_COMPILER =		nasm -f macho64 -g

ASM_FILES =			ft_isascii \
					ft_isdigit \
					ft_isupper	\
					ft_islower	\
					ft_isalpha	\
					ft_isalnum	\
					ft_isprint	\
					ft_puts		\
					ft_strlen 	\
					ft_memset	\
					ft_memcpy	\
					ft_strdup	\

					# ft_toupper	\
					# ft_tolower	\
					# ft_strcat	\
					# ft_pow		\
					# ft_abs		\
					# ft_rand		\
					# ft_swap		\
					# ft_collatz	\
					# ft_memchr	\
					# ft_strncmp	\
					# ft_atoi		\
					# ft_align \
					# ft_cat	\

ASM_S :=			$(addsuffix .s,$(ASM_FILES))
ASM_OBJ :=			$(addsuffix .o,$(ASM_FILES))

all: $(NAME)

$(NAME): $(ASM_OBJ)
	@ar rc $(NAME) $(ASM_OBJ)
	@printf "\e[32m------------------------------------------------------\e[0m\n"
	@printf '\e[34m%-51s\e[0m\e[32m[✔]\e[0m\n' "created libfts.a"
	@printf "\e[32m------------------------------------------------------\e[0m\n"

$(ASM_OBJ): %.o: %.s
	@$(ASM_COMPILER) $< -o $@

clean:
	@rm test

test: clean $(NAME)
	@gcc main.c $(NAME) -o test
	@printf "\e[32m------------------------------------------------------\e[0m\n"
	@printf '\e[34m%-51s\e[0m\e[32m[✔]\e[0m\n' "Start Testing"
	@printf "\e[32m------------------------------------------------------\e[0m\n"
	@./test

fclean:
	@rm *.o

.PHONY: all clean fclean re
