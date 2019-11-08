# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouby <agouby@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/07 23:40:39 by agouby            #+#    #+#              #
#    Updated: 2019/11/08 17:21:46 by agouby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLA = -g -Wall -Wextra -Werror 

SRCS_PATH = ./srcs/
SRCS_FILES = ft_atoi.c \
	  ft_atou.c \
	  ft_bzero.c \
	  ft_count_digits.c \
	  ft_countwords.c \
	  ft_deg_to_rad.c \
	  ft_getwords.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_islower.c \
	  ft_isprint.c \
	  ft_isspace.c \
	  ft_isupper.c \
	  ft_itoa_base.c \
	  ft_itoa_buf.c \
	  ft_itoa_ubase.c \
	  ft_jump_lines.c \
	  ft_lstadd.c \
	  ft_lstaddb.c \
	  ft_lstdel.c \
	  ft_lstdelone.c \
	  ft_lstinsert.c \
	  ft_lstiter.c \
	  ft_lstlen.c \
	  ft_lstmap.c \
	  ft_lstnew.c \
	  ft_lstnew_noalloc.c \
	  ft_lstnewsize.c \
	  ft_lstprint.c \
	  ft_lstrev.c \
	  ft_memalloc.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memdel.c \
	  ft_memerr.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_pow.c \
	  ft_print_error.c \
	  ft_range.c \
	  ft_sorts.c \
	  ft_square.c \
	  ft_strcat.c \
	  ft_strchr.c \
	  ft_strchr_b.c \
	  ft_strclr.c \
	  ft_strcmp.c \
	  ft_strcpy.c \
	  ft_strcpy_e.c \
	  ft_strdel.c \
	  ft_strdup.c \
	  ft_strequ.c \
	  ft_strisdigit.c \
	  ft_strislower.c \
	  ft_strisupper.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_strjoin_del.c \
	  ft_strlcat.c \
	  ft_strlen.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strncat.c \
	  ft_strnchr.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_strncpy_e.c \
	  ft_strnequ.c \
	  ft_strnew.c \
	  ft_strnew_set.c \
	  ft_strnjoin.c \
	  ft_strnjoin_del.c \
	  ft_strnjoin_del_1.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strrev.c \
	  ft_strsplit.c \
	  ft_strstr.c \
	  ft_strsub.c \
	  ft_strtolower.c \
	  ft_strtoupper.c \
	  ft_strtrim.c \
	  ft_swap_tab.c \
	  ft_swapc.c \
	  ft_swapi.c \
	  ft_swaps.c \
	  ft_tabdel.c \
	  ft_tablen.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_skip_spaces.c \
	  ft_realpath.c \
      get_next_line.c \
	  printf/arg_type.c \
	  printf/choose_args.c \
	  printf/deal_1.c \
	  printf/deal_2.c \
	  printf/deal_3.c \
	  printf/flags.c \
	  printf/ft_printf.c \
	  printf/get_args_1.c \
	  printf/get_args_2.c \
	  printf/get_args_3.c \
	  printf/get_type.c \
	  printf/infos.c \
	  printf/init.c \
	  printf/main_loop.c \
	  printf/main_loop_empty.c \
	  printf/parse_format.c \
	  printf/wchar.c

SRCS += $(addprefix $(SRCS_PATH), $(SRCS_FILES))

OBJ = ${SRCS:.c=.o}


INC_PATH = includes/
INC += $(addprefix -iquote, $(INC_PATH))


all: $(NAME)

$(NAME): $(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
%.o: %.c
	@printf "\r\e[KCompiling $<"	
	@gcc $(FLA) $(INC) -c $< -o $@
clean:
		@/bin/rm -f $(OBJ)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
