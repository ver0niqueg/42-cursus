################################################################################
#                                     COLORS                                   #
################################################################################

DEFAULT         = \033[0m
WHITE           = \033[1;37m
PASTEL_VIOLET   = \033[1;38;5;183m
PASTEL_GREEN    = \033[1;38;5;120m
PASTEL_RED      = \033[1;38;5;203m

################################################################################
#                                 PROGRESS BAR                                 #
################################################################################

define PROGRESS_BAR
	@TOTAL_STEPS=20; CURRENT_STEP=0; \
	echo -n "["; \
	while [ $$CURRENT_STEP -lt $$TOTAL_STEPS ]; do \
		CURRENT_STEP=$$(($$CURRENT_STEP + 1)); \
		echo -n "$(PASTEL_GREEN)▰$(DEFAULT)"; \
		sleep 0.01; \
	done; \
	echo "] $(PASTEL_GREEN)100%$(DEFAULT)"
endef

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        = libftprintf.a
CC          = cc
FLAGS       = -Wall -Werror -Wextra
RM          = rm -f

LIBFT       = ./libft
LIBFT_A     = ./libft/libft.a

SRCS =  ft_print_hexa.c \
        ft_print_int.c \
        ft_print_pointer.c \
        ft_print_string.c \
        ft_print_unsigned.c \
        ft_printf.c

OBJS = $(SRCS:.c=.o)

################################################################################
#                                     RULES                                    #
################################################################################

# Compile .c to .o
%.o: %.c
	@echo "\n🔨 $(WHITE)Compiling $(PASTEL_VIOLET)$<$(DEFAULT)"
	@$(CC) $(FLAGS) -c $< -o $@
	$(PROGRESS_BAR)

# Build library
$(NAME): $(OBJS)
	@echo "\n📚 $(WHITE)Building $(PASTEL_VIOLET)libft$(DEFAULT)"
	@make -C $(LIBFT)
	$(PROGRESS_BAR)
	@echo "\n📦 $(WHITE)Archiving $(PASTEL_VIOLET)$(NAME)$(DEFAULT)"
	@cp $(LIBFT_A) $(NAME)
	@ar rcs $(NAME) $(OBJS)
	$(PROGRESS_BAR)
	@echo ""

# Default rule
all: $(NAME)

# Clean objects
clean:
	@echo "\n🧹 $(PASTEL_RED)Cleaning ft_printf object files$(DEFAULT)"
	@make clean -C $(LIBFT)
	@$(RM) $(OBJS)

# Clean everything
fclean: clean
	@echo "\n🗑️  $(PASTEL_RED)Deleting $(PASTEL_VIOLET)libftprintf.a$(DEFAULT)"
	@$(RM) $(NAME)
	@$(RM) $(LIBFT_A)
	@echo ""

# Rebuild
re: fclean all

.PHONY: all clean fclean re
