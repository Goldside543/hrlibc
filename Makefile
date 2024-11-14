# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -fPIC

# Shared library name
LIBNAME = hrlibc
LIBSO = lib$(LIBNAME).so

# Object files
OBJS = hrlibc.o

# Targets
all: $(LIBSO)

# Build the shared library
$(LIBSO): $(OBJS)
	$(CC) -shared -o $@ $(OBJS)

# Compile the object files
hrlibc.o: hrlibc.c hrlibc.h
	$(CC) $(CFLAGS) -c hrlibc.c

# Clean up build artifacts
clean:
	rm -f $(LIBSO) $(OBJS)

.PHONY: all clean
