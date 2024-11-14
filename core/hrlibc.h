/* SPDX-License-Identifier: LGPL-2.1-only */

#ifndef HRLIBC_H
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
#include <time.h>
#include <unistd.h>

// Print formatted output
void print(const char *format, ...);

// Get input from user
int getinput(const char *format, ...);

// Set memory block to a specific value
void setmemory(void *ptr, int value, size_t num);

// Allocate memory
void* allocate(size_t size);

// Deallocate memory
void deallocate(void *ptr);

// Copy memory block
void* copymemory(void *dest, const void *src, size_t num);

// Move memory block
void* movememory(void *dest, const void *src, size_t num);

// Compare memory blocks
int comparememory(const void *ptr1, const void *ptr2, size_t num);

// Find byte in memory
void* findbyte(const void *ptr, int value, size_t num);

// String operations
char* copystring(char *dest, const char *src);
char* concatenate(char *dest, const char *src);
size_t stringlength(const char *str);
int comparestrings(const char *str1, const char *str2);
char* findsubstring(const char *haystack, const char *needle);
void uppercase(char *str);
void lowercase(char *str);
char* tokenize(char *str, const char *delim);

// Check if string is numeric
int isnumber(const char *str);

// Conversions
int stringtoint(const char *str, char **endptr, int base);
double stringtodouble(const char *str, char **endptr);
char* inttostring(int value, char *str, size_t size, int base);
char* doubletostring(double value, char *str, size_t size);

// Math operations
int absolute(int x);
double roundnumber(double x);
int min(int a, int b);
int max(int a, int b);
double squareroot(double x);
double power(double base, double exponent);

// File operations
FILE* openfile(const char *filename, const char *mode);
void closefile(FILE *file);
char* readline(char *buffer, int size, FILE *file);
int writeline(const char *str, FILE *file);
int endoffile(FILE *file);
int seekfile(FILE *file, long offset, int origin);
long tellfile(FILE *file);
void clearfileerror(FILE *file);

// Utility
void pauseprogram(double seconds);
time_t currenttime();
void exitprogram(int status);

// Random number generation
int randomint(int max);
void seedrandom(unsigned int seed);

#endif // HRLIBC_H
