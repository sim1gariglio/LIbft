# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 12:09:22 by sgarigli          #+#    #+#              #
#    Updated: 2024/04/22 16:48:44 by sgarigli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strnstr.c \
	ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlcpy.c ft_strrchr.c \
	ft_bzero.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_tolower.c \
	ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

FT_CONV_DIR = ft_conv
FT_CONV_SRCS = $(FT_CONV_DIR)/ft_atoi.c $(FT_CONV_DIR)/ft_itoa.c 
FT_CONV_HEADER = $(FT_CONV_DIR)/ft_conv.h

FT_FD_DIR = ft_fd
FT_FD_SRCS = $(FT_FD_DIR)/ft_putchar_fd.c $(FT_FD_DIR)/ft_putendl_fd.c $(FT_FD_DIR)/ft_putnbr_fd.c $(FT_FD_DIR)/ft_putstr_fd.c
FT_FD_HEADER = $(FT_FD_DIR)/ft_fd.h

FT_IS_DIR = ft_is
FT_IS_SRCS = $(FT_IS_DIR)/ft_isalnum.c $(FT_IS_DIR)/ft_isalpha.c $(FT_IS_DIR)/ft_isascii.c $(FT_IS_DIR)/ft_isdigit.c $(FT_IS_DIR)/ft_isprint.c
FT_IS_HEADER = $(FT_IS_DIR)/ft_is.h

FT_LIST_DIR = ft_list
FT_LIST_SRCS = $(FT_LIST_DIR)/ft_lstadd_back.c $(FT_LIST_DIR)/ft_lstadd_front.c $(FT_LIST_DIR)/ft_lstclear.c $(FT_LIST_DIR)/ft_lstdelone.c /
	$(FT_LIST_DIR)/ft_lstiter.c $(FT_LIST_DIR)/ft_lstlast.c $(FT_LIST_DIR)/ft_lstmap.c $(FT_LIST_DIR)/ft_lstnew.c $(FT_LIST_DIR)/ft_lstsize.c 
FT_LIST_HEADER = $(FT_LIST_DIR)/ft_list.h

FT_MEM_DIR = ft_mem
FT_MEM_SRCS = $(FT_MEM_DIR)/ft_bzero.c $(FT_MEM_DIR)/ft_calloc.c $(FT_MEM_DIR)/ft_memchr.c $(FT_MEM_DIR)/ft_memcmp.c $(FT_MEM_DIR)/ft_memcpy.c /
	$(FT_MEM_DIR)/ft_memmove.c $(FT_MEM_DIR)/ft_memset.c
FT_MEM_HEADER = $(FT_MEM_DIR)/ft_mem.h

FT_NBR_UTILS_DIR = ft_nbr_utils
FT_NBR_UTILS_SRCS = 
FT_NBR_UTILS_HEADER = $(FT_NBR_UTILS_DIR)/ft_nbr_utils.h

FT_STRING_UTILS_DIR = ft_string_utils
FT_STRING_UTILS_SRCS = 
FT_STRING_UTILS_HEADER = $(FT_STRING_UTILS_DIR)/ft_string_utils.h

FT_UTILS_DIR = ft_utils
FT_UTILS_SRCS = 
FT_UTILS_HEADER = $(FT_UTILS_DIR)/ft_utils.h

GNL_DIR = get_next_line
GNL_SRCS = $(GNL_DIR)/get_next_line_bonus.c $(GNL_DIR)/get_next_line_utils_bonus.c 

FT_PRINTF_DIR = ft_printf
FT_PRINTF_SRC = $(FT_PRINTF_DIR)/ft_printf.c $(FT_PRINTF_DIR)/ft_printf_hex.c \
				$(FT_PRINTF_DIR)/ft_printf_pointer.c $(FT_PRINTF_DIR)/ft_printf_utils.c \
				$(FT_PRINTF_DIR)/ft_uitoa.c

OBJS = $(SRCS:.c=.o) $(GNL_SRCS:.c=.o) $(FT_PRINTF_SRC:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Created files.o"
	@echo "Created libft.a"

%.o: %.c libft.h $(GNL_DIR)/get_next_line_bonus.h $(FT_PRINTF_DIR)/ft_printf.h
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "Removed files.o"
	
fclean: clean
	@rm -f $(NAME)
	@echo "Removed libft.a"

re: fclean all

bonus: $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS)
	ranlib $(NAME)

.PHONY: NAME all clean fclean re bonus
