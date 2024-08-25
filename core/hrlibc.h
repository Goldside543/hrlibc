/* SPDX-License-Identifier: LGPL-2.0-only */

ifndef HRLIBC_H
#define HRLIBC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <limits.h>
#include <float.h>

// Print formatted output
void print(const char *format, ...);

// Set memory block to a specific value
void setmemory(void *ptr, int value, size_t num);

// Copy string to destination
char* copystring(char *dest, const char *src);

// Get length of string
size_t stringlength(const char *str);

// Compare two strings
int comparestrings(const char *str1, const char *str2);

// Allocate memory
void* allocate(size_t size);

// Deallocate memory
void deallocate(void *ptr);

// Concatenate two strings
char* concatenate(char *dest, const char *src);

// Tokenize a string
char* tokenize(char *str, const char *delim);

// Convert string to integer
int stringtoint(const char *str, char **endptr, int base);

// Convert string to double
double stringtodouble(const char *str, char **endptr);

// Check if string is a number
int isnumber(const char *str);

// Get absolute value of an integer
int absolute(int x);

// Round a floating-point number to the nearest integer
double roundnumber(double x);

// Convert integer to string
char* inttostring(int value, char *str, size_t size, int base);

// Compare two memory blocks
int comparememory(const void *ptr1, const void *ptr2, size_t num);

// Find a substring in a string
char* findsubstring(const char *haystack, const char *needle);

// Convert to upper case
void uppercase(char *str);

// Convert to lower case
void lowercase(char *str);

// Find the length of a memory block filled with a specific value
size_t memorylength(const void *ptr, int value, size_t num);

#endif // HRLIBC_H
