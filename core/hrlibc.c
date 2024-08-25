// SPDX-License-Identifier: LGPL-2.1-only
/*
 * core/hrlibc.c
 * 
 * Main file of hrlibc.
 * 
 * Copyright (C) 2024 Goldside543
 *
 */

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

// Copy string to destination
char* copystring(char *dest, const char *src) {
    return strcpy(dest, src);
}

// Get length of string
size_t stringlength(const char *str) {
    return strlen(str);
}

// Compare two strings
int comparestrings(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}

// Allocate memory
void* allocate(size_t size) {
    return malloc(size);
}

// Deallocate memory
void deallocate(void *ptr) {
    free(ptr);
}

// Concatenate two strings
char* concatenate(char *dest, const char *src) {
    return strcat(dest, src);
}

// Tokenize a string
char* tokenize(char *str, const char *delim) {
    return strtok(str, delim);
}

// Convert string to integer
int stringtoint(const char *str, char **endptr, int base) {
    return strtol(str, endptr, base);
}

// Convert string to double
double stringtodouble(const char *str, char **endptr) {
    return strtod(str, endptr);
}

// Check if string is a number
int isnumber(const char *str) {
    char *endptr;
    strtod(str, &endptr);
    return *endptr == '\0';
}

// Get absolute value of an integer
int absolute(int x) {
    return abs(x);
}

// Round a floating-point number to the nearest integer
double roundnumber(double x) {
    return round(x);
}

// Convert integer to string
char* inttostring(int value, char *str, size_t size, int base) {
    return snprintf(str, size, "%d", value), str;
}

// Compare two memory blocks
int comparememory(const void *ptr1, const void *ptr2, size_t num) {
    return memcmp(ptr1, ptr2, num);
}

// Find a substring in a string
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

// Find the length of a memory block
size_t memorylength(const void *ptr, int value, size_t num) {
    const unsigned char *p = ptr;
    size_t length = 0;
    while (length < num && p[length] == (unsigned char)value) {
        length++;
    }
    return length;
}
