# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 14:47:39 by anferre2          #+#    #+#              #
#    Updated: 2025/04/25 14:56:22 by anferre2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#                                   Alias                                      #
#==============================================================================#

CC = cc -Wall -Wextra -Werror -g
AR = ar rcs
RM = rm -rf

#==============================================================================#
#                                 Files and Paths                              #
#==============================================================================#


NAME        = libftprintf.a
SRCS        = ft_printf.c ft_printhex.c ft_putchar.c ft_putnbr.c ft_putptr.c ft_putstr.c

OBJS        = $(SRCS:.c=.o)

#==============================================================================#
#                                    Rules                                     #
#==============================================================================#

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GRN)[Libft successfully compiled]$(D)"

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@echo "$(BCYA)[clean] Objects removed$(D)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(BCYA)[fclean] Archive removed$(D)"

re: fclean all

%.o: %.c
	@$(CC) -c $< -o $@

.PHONY: all clean fclean re bonus


#==============================================================================#
#                                  UTILS                                       #
#==============================================================================#

# Colors
#
# Run the following command to get list of available colors
# bash -c 'for c in {0..255}; do tput setaf $c; tput setaf $c | cat -v; echo =$c; done'
#
B  		= $(shell tput bold)
BLA		= $(shell tput setaf 232)
RED		= $(shell tput setaf 196)
GRN		= $(shell tput setaf 82)
YEL		= $(shell tput setaf 226)
BLU		= $(shell tput setaf 4)
MAG		= $(shell tput setaf 201)
CYA		= $(shell tput setaf 6)
WHI		= $(shell tput setaf 7)
GRE		= $(shell tput setaf 8)
BRED 	= $(shell tput setaf 9)
BGRN	= $(shell tput setaf 10)
BYEL	= $(shell tput setaf 11)
BBLU	= $(shell tput setaf 12)
BMAG	= $(shell tput setaf 13)
BCYA	= $(shell tput setaf 14)
BWHI	= $(shell tput setaf 15)
D 		= $(shell tput sgr0)
BEL 	= $(shell tput bel)
CLR 	= $(shell tput el 1)