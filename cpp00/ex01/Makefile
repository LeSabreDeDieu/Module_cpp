# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 16:28:59 by sgabsi            #+#    #+#              #
#    Updated: 2024/03/20 13:05:41 by sgabsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#################
##  VARIABLES  ##
#################

# Directories
SRCDIR		=	./srcs
INCDIR		=	./includes
OBJDIR		=	objs

# Sources

SRCS		=	$(SRCDIR)/contact.cpp $(SRCDIR)/phoneBook.cpp $(SRCDIR)/main.cpp

# Objects
OBJS 		= $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Output
NAME		=	a.out

# Compiler
CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
OPTIONS		=	-I $(INCDIR)

# Progress bar
COUNT		=	1
TOTAL_FILES	=	$(shell find ./srcs -type f -name "*.cpp" | wc -l)

# Colors
RED			=	\033[0;31m
GREEN		=	\033[0;32m
YELLOW		=	\033[0;33m
NC			=	\033[0m
KL			=	\033[K

#################
##  TARGETS    ##
#################

all: pre_comp $(NAME)

pre_comp :
	@echo "$(YELLOW)********* Début de la compilation du programme $(NAME) *********$(NC)"

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(CFLAGS) $(OPTIONS) $(LFLAGS) -o $@
	@echo -e "\r$(GREEN)********* Compilation terminée avec succès! *********$(NC)$(KL)"
	@echo "$(GREEN)********* L'executable $(NAME) a été créée. *********$(NC)"

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(OPTIONS) -c $< -o $@
	@printf "$(NC)\rCompiling files: [%-50s] %3d%% (%d/%d) %s$(KL)" \
		"$(shell printf '=%.0s' $$(seq 1 $$(($(COUNT) * 50 / $(TOTAL_FILES)))))" \
		$$(($(COUNT) * 100 / $(TOTAL_FILES))) \
		$(COUNT) \
		$(TOTAL_FILES) \
		$<
	$(eval COUNT=$(shell echo $$(($(COUNT)+1))))

clean:
	@rm -rf $(OBJDIR)
	@echo "$(YELLOW)********* Suppression des fichiers objets *********$(NC)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)********* Suppression de l'executable $(NAME) *********$(NC)"

re: fclean all

.PHONY: all clean fclean re