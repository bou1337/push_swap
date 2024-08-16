# Define the compiler and the flags
CC = gcc
#CFLAGS = -Wall -Wextra  -Werror 

# List all source files
SRCS = moves1.c moves2.c moves3.c sort1.c utils_for_parsing.c utils_for_parsing1.c utils_for_sort.c  main.c  sort2.c free_stack.c 

# Define the object files by replacing .c with .o
OBJS = $(SRCS:.c=.o)

# Define the name of the final executable
TARGET = push_swap

# The default target
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

# Compile each .c file into a .o file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up the build files
clean:
	rm -f $(TARGET) $(OBJS)

# Optional: Phony targets to avoid conflicts with files named 'all' or 'clean'
.PHONY: all clean
