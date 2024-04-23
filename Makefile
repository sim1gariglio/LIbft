# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 12:09:22 by sgarigli          #+#    #+#              #
#    Updated: 2024/04/23 11:42:22 by sgarigli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

FT_CONV_DIR = ft_conv/
FT_CONV_SRCS = $(FT_CONV_DIR)/ft_atoi.c $(FT_CONV_DIR)/ft_itoa.c $(FT_CONV_DIR)/ft_uitoa.c
FT_CONV_HEADER = $(FT_CONV_DIR)/ft_conv.h

FT_FD_DIR = ft_fd
FT_FD_SRCS = $(FT_FD_DIR)/ft_putchar_fd.c $(FT_FD_DIR)/ft_putendl_fd.c $(FT_FD_DIR)/ft_putnbr_fd.c $(FT_FD_DIR)/ft_putstr_fd.c
FT_FD_HEADER = $(FT_FD_DIR)/ft_fd.h

FT_IS_DIR = ft_is
FT_IS_SRCS = $(FT_IS_DIR)/ft_isalnum.c $(FT_IS_DIR)/ft_isalpha.c $(FT_IS_DIR)/ft_isascii.c $(FT_IS_DIR)/ft_isdigit.c $(FT_IS_DIR)/ft_isprint.c
FT_IS_HEADER = $(FT_IS_DIR)/ft_is.h

FT_LIST_DIR = ft_list
FT_LIST_SRCS = $(FT_LIST_DIR)/ft_lstadd_back.c $(FT_LIST_DIR)/ft_lstadd_front.c $(FT_LIST_DIR)/ft_lstclear.c $(FT_LIST_DIR)/ft_lstdelone.c \
	$(FT_LIST_DIR)/ft_lstiter.c $(FT_LIST_DIR)/ft_lstlast.c $(FT_LIST_DIR)/ft_lstmap.c $(FT_LIST_DIR)/ft_lstnew.c $(FT_LIST_DIR)/ft_lstsize.c 
FT_LIST_HEADER = $(FT_LIST_DIR)/ft_list.h

FT_MEM_DIR = ft_mem
FT_MEM_SRCS = $(FT_MEM_DIR)/ft_bzero.c $(FT_MEM_DIR)/ft_calloc.c $(FT_MEM_DIR)/ft_memchr.c $(FT_MEM_DIR)/ft_memcmp.c $(FT_MEM_DIR)/ft_memcpy.c \
	$(FT_MEM_DIR)/ft_memmove.c $(FT_MEM_DIR)/ft_memset.c
FT_MEM_HEADER = $(FT_MEM_DIR)/ft_mem.h

FT_NBR_UTILS_DIR = ft_nbr_utils
FT_NBR_UTILS_SRCS = 
FT_NBR_UTILS_HEADER = $(FT_NBR_UTILS_DIR)/ft_nbr_utils.h

FT_STRING_UTILS_DIR = ft_string_utils
FT_STRING_UTILS_SRCS = $(FT_STRING_UTILS_DIR)/ft_strchr.c $(FT_STRING_UTILS_DIR)/ft_strdup.c $(FT_STRING_UTILS_DIR)/ft_striteri.c \
	$(FT_STRING_UTILS_DIR)/ft_strjoin.c $(FT_STRING_UTILS_DIR)/ft_strlcat.c $(FT_STRING_UTILS_DIR)/ft_strlcpy.c $(FT_STRING_UTILS_DIR)/ft_strlen.c \
	$(FT_STRING_UTILS_DIR)/ft_strmapi.c $(FT_STRING_UTILS_DIR)/ft_strncmp.c $(FT_STRING_UTILS_DIR)/ft_strnstr.c $(FT_STRING_UTILS_DIR)/ft_strrchr.c \
	$(FT_STRING_UTILS_DIR)/ft_strtrim.c $(FT_STRING_UTILS_DIR)/ft_substr.c $(FT_STRING_UTILS_DIR)/ft_split.c $(FT_STRING_UTILS_DIR)/ft_putchar.c \
	$(FT_STRING_UTILS_DIR)/ft_putstr.c $(FT_STRING_UTILS_DIR)/ft_freeputstr.c $(FT_STRING_UTILS_DIR)/ft_newstrjoin.c
FT_STRING_UTILS_HEADER = $(FT_STRING_UTILS_DIR)/ft_string_utils.h

FT_UTILS_DIR = ft_utils
FT_UTILS_SRCS = $(FT_UTILS_DIR)/ft_tolower.c $(FT_UTILS_DIR)/ft_toupper.c
FT_UTILS_HEADER = $(FT_UTILS_DIR)/ft_utils.h

GNL_DIR = get_next_line
GNL_SRCS = $(GNL_DIR)/get_next_line_bonus.c $(GNL_DIR)/get_next_line_utils_bonus.c 

FT_PRINTF_DIR = ft_printf
FT_PRINTF_SRC = $(FT_PRINTF_DIR)/ft_printf.c $(FT_PRINTF_DIR)/ft_printf_hex.c \
				$(FT_PRINTF_DIR)/ft_printf_pointer.c \

SRCS =	$(FT_CONV_SRCS) $(FT_FD_SRCS) $(FT_IS_SRCS) $(FT_LIST_SRCS) $(FT_MEM_SRCS) $(FT_NBR_UTILS_SRCS) $(FT_STRING_UTILS_SRCS) \
	$(FT_UTILS_SRCS) $(FT_PRINTF_SRC) $(GNL_SRCS)

OBJS = $(SRCS:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Created files.o"
	@echo "Created libft.a"

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "Removed files.o"
	
fclean: clean
	@rm -f $(NAME)
	@echo "Removed libft.a"

re: fclean all

.PHONY: NAME all clean fclean re
