# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 10:50:58 by sgabsi            #+#    #+#              #
#    Updated: 2024/07/04 11:54:37 by sgabsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#################
##  VARIABLES  ##
#################

# Directories
SRCDIR				=	.
OBJDIR				=	objs

# Sources
SRCS				=	main.cpp \
						Harl.cpp

# Objects
OBJ					=	$(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Output
NAME				=	harl

# Compiler
CPP					=	c++
CFLAGS				=	-Wall -Werror -Wextra -std=c++98

#Progress bar
COUNT		=	1
TOTAL_FILES	=	$(shell find . -type f -name "*.c" | wc -l)

# Colors
GREEN		=	\033[0;32m
YELLOW		=	\033[0;33m
RED			=	\033[0;31m
NC			=	\033[0m
KL			=	\033[K

#################
##  TARGETS    ##
#################

all: pre_comp $(NAME)

pre_comp :
	@echo "$(YELLOW)********* Début de la compilation de $(NAME) *********$(NC)"

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) -o $@ $^
	@echo -e "\r$(GREEN)********* Compilation terminée avec succès! *********$(NC)$(KL)"
	@echo "$(GREEN)********* $(NAME) a été créée. *********$(NC)"

$(OBJDIR)/%.o: $(SRCS)
	@mkdir -p $(dir $@)
	@$(CPP) $(CFLAGS) $(OPTIONS) -o $@ -c $<
	@printf "\rCompiling files: [%-50s] %3d%% (%d/%d) %s$(KL)" \
		"$(shell printf '=%.0s' $$(seq 1 $$(($(COUNT) * 50 / $(TOTAL_FILES)))))" \
		$$(($(COUNT) * 100 / $(TOTAL_FILES))) \
		$(COUNT) \
		$(TOTAL_FILES) \
		$<
	$(eval COUNT=$(shell echo $$(($(COUNT)+1))))

clean:
	@/bin/rm -rf $(OBJDIR)
	@echo "$(YELLOW)********* Suppression des fichiers objets *********$(NC)"

fclean: clean
	@/bin/rm -f $(NAME)
	@/bin/rm -f $(NAMESO) a.out
	@echo "$(RED)********* Suppression de $(NAME) *********$(NC)"
	
re: fclean all
