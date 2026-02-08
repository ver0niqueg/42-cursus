################################################################################
#                                     COLORS                                   #
################################################################################

DEFAULT			= \033[0m
WHITE			= \033[1;37m
PASTEL_VIOLET 	= \033[1;38;5;183m
PASTEL_GREEN 	= \033[1;38;5;120m
PASTEL_RED 		= \033[1;38;5;203m

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

NAME =		libft.a
CC = 		cc
FLAGS = 	-Wall -Werror -Wextra
RM = 		rm -f

SRCS	= ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

OBJS	= $(SRCS:.c=.o)

BONUS	= ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

BONUS_OBJS	= $(BONUS:.c=.o)

################################################################################
#                                     RULES                                    #
################################################################################

# Rule for compiling .c files into .o
%.o: %.c
	@echo "\n🔨 $(WHITE)Compiling $(PASTEL_VIOLET)$<$(DEFAULT) into object file"
	@$(CC) $(FLAGS) -c $< -o $@
	$(PROGRESS_BAR)

# Rule for building the library
$(NAME): $(OBJS)
	@echo "\n📦 $(WHITE)Archiving $(PASTEL_VIOLET)$(NAME)$(DEFAULT)"
	@ar rcs $(NAME) $(OBJS)
	$(PROGRESS_BAR)
	@echo ""

# Rule for building the bonus
bonus: $(OBJS) $(BONUS_OBJS)
	@echo "\n📦 $(WHITE)Archiving $(PASTEL_VIOLET)$(NAME)$(DEFAULT) with bonus"
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	$(PROGRESS_BAR)
	@echo ""

# Default rule
all: $(NAME)

# Rule for cleaning object files
clean:
	@echo "\n🧹 $(PASTEL_RED)Cleaning object files$(DEFAULT)"
	@$(RM) $(OBJS) $(BONUS_OBJS)
	$(PROGRESS_BAR)

# Rule for cleaning everything
fclean: clean
	@echo "\n🗑️  $(PASTEL_RED)Deleting library $(PASTEL_VIOLET)$(NAME)$(DEFAULT)"
	@$(RM) $(NAME)
	$(PROGRESS_BAR)
	@echo ""

# Rebuild rule
re: fclean all

.PHONY: all clean fclean re bonus
