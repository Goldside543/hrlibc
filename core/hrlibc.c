// SPDX-License-Identifier: LGPL-2.1-only
/*
 * core/hrlibc.c
 * 
 * Main file of hrlibc.
 * 
 * Copyright (C) 2024 Goldside543
 *
 */

#include "hrlibc.h"

// Print formatted output
void print(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

// Get input from user
int getinput(const char *format, ...) {
    va_list args;
    va_start(args, format);
    int result = vscanf(format, args);
    va_end(args);
    return result;
}

// Set memory block to a specific value
void setmemory(void *ptr, int value, size_t num) {
    memset(ptr, value, num);
}

// Allocate memory
void* allocate(size_t size) {
    return malloc(size);
}

// Deallocate memory
void deallocate(void *ptr) {
    free(ptr);
}

// Copy memory block
void* copymemory(void *dest, const void *src, size_t num) {
    return memcpy(dest, src, num);
}

// Move memory block
void* movememory(void *dest, const void *src, size_t num) {
    return memmove(dest, src, num);
}

// Compare memory blocks
int comparememory(const void *ptr1, const void *ptr2, size_t num) {
    return memcmp(ptr1, ptr2, num);
}

// Find byte in memory
void* findbyte(const void *ptr, int value, size_t num) {
    return memchr(ptr, value, num);
}

// String operations

// Copy string
char* copystring(char *dest, const char *src) {
    return strcpy(dest, src);
}

// Concatenate strings
char* concatenate(char *dest, const char *src) {
    return strcat(dest, src);
}

// Get length of string
size_t stringlength(const char *str) {
    return strlen(str);
}

// Compare two strings
int comparestrings(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}

// Find substring
char* findsubstring(const char *haystack, const char *needle) {
    return strstr(haystack, needle);
}

// Convert to upper case
void uppercase(char *str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

// Convert to lower case
void lowercase(char *str) {
    while (*str) {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

// Tokenize string
char* tokenize(char *str, const char *delim) {
    return strtok(str, delim);
}

// Check if string is numeric
int isnumber(const char *str) {
    char *endptr;
    strtod(str, &endptr);
    return *endptr == '\0';
}

// Conversions

// String to integer
int stringtoint(const char *str, char **endptr, int base) {
    return strtol(str, endptr, base);
}

// String to double
double stringtodouble(const char *str, char **endptr) {
    return strtod(str, endptr);
}

// Integer to string
char* inttostring(int value, char *str, size_t size, int base) {
    return snprintf(str, size, "%d", value), str;
}

// Double to string
char* doubletostring(double value, char *str, size_t size) {
    snprintf(str, size, "%f", value);
    return str;
}

// Math operations

// Absolute value of integer
int absolute(int x) {
    return abs(x);
}

// Round a floating-point number
double roundnumber(double x) {
    return round(x);
}

// Minimum of two integers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Square root of a number
double squareroot(double x) {
    return sqrt(x);
}

// Power of a number
double power(double base, double exponent) {
    return pow(base, exponent);
}

// File operations

// Open file
FILE* openfile(const char *filename, const char *mode) {
    return fopen(filename, mode);
}

// Close file
void closefile(FILE *file) {
    fclose(file);
}

// Read line from file
char* readline(char *buffer, int size, FILE *file) {
    return fgets(buffer, size, file);
}

// Write string to file
int writeline(const char *str, FILE *file) {
    return fputs(str, file);
}

// End of file check
int endoffile(FILE *file) {
    return feof(file);
}

// Seek in file
int seekfile(FILE *file, long offset, int origin) {
    return fseek(file, offset, origin);
}

// Get current file position
long tellfile(FILE *file) {
    return ftell(file);
}

// Clear file errors
void clearfileerror(FILE *file) {
    clearerr(file);
}

// Utility

// Pause program execution
void pauseprogram(double seconds) {
    usleep(seconds * 1000000); // Convert seconds to microseconds
}

// Get system time in seconds
time_t currenttime() {
    return time(NULL);
}

// Exit program
void exitprogram(int status) {
    exit(status);
}

// Generate random integer
int randomint(int max) {
    return rand() % max;
}

// Seed random number generator
void seedrandom(unsigned int seed) {
    srand(seed);
}
